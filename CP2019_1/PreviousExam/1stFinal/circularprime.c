#include <stdio.h>

int numcnt(int n){
    int i;
    for(i=1; n/10; i++){
        n /= 10;
    }
    return i;
}

int rotate(int n){
    int tmp = n;
    while(tmp/10){
        tmp /= 10;
    }
   
    int cnt = tmp;
    for(int i = numcnt(n)-1; i; i--){
        cnt *= 10;
    }
    int num = n - cnt;
    num *= 10;
    num += tmp;

    return num;
}

int is_circular_prime(int n){
    int num = n;
    int cnt = 0;

    do{
        for(int i = 2; i*i < num; i++){
            if(num % i == 0){
                cnt = 1;
            }
        }
        num = rotate(num);
    } while(num != n);

    return cnt ? 0 : 1;
}


int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(is_circular_prime(num)){
        printf("%d is a circular prime\n", num);
    }
    else{
        printf("%d is not circular prime\n", num);
    }

    return 0;
}
