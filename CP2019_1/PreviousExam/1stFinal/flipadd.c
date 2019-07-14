#include <stdio.h>

int flipadd(int n);
int palindrome(int n);
int solve(int n, int *count);

int cnt = 0;

void main(){
    FILE* fp;
    int num;
    
    //modified

    fp = stdin;
    scanf("%d", &num);

    //
    for(int i=0; i<num; i++){
        int n, res;
        int count;
        fscanf(fp, "%d", &n);
        res = solve(n, &count);
        printf("%d %d %d\n", n, count, res);
    }

}

int flipadd(int n){
    int m = 0;
    int tmp = n;
    
    for(int i=0; tmp; i++){
        m *= 10;
        m += tmp%10;
        tmp /= 10;
    }

    return m+n;
}

int palindrome(int n){
    int m = 0;
    int tmp = n;

    for(int i=0; tmp; i++){
        m *= 10;
        m += tmp%10;
        tmp /= 10;
    }

    return m == n;
}

int solve(int n, int *count){
    if(cnt < 1001){
        if(palindrome(n)){
            (*count) = cnt;
            cnt = 0;
            return n;
        }
        else{
            cnt++;
            if(palindrome(flipadd(n))){
                (*count) = cnt;
                cnt = 0;
                return flipadd(n);
            }
            else{
                return solve(flipadd(n), count);
            }
        }
    }
    else{
        (*count) = cnt;
        cnt = 0;
        return n;
    }
}


