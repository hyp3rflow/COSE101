#include <stdio.h>

int count(int);
int is_prime(int);
int rotate(int);
int is_circular_prime(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(is_circular_prime(num))
        printf("%d is a circular prime\n", num);
    else
        printf("%d is not circular prime\n", num);
}

int count(int n){
    int cnt, tmp = n;
    for(cnt = 1; tmp / 10; cnt++){
        tmp /= 10;
    }
    return cnt;
}

int is_prime(int n){
    for(int a=2; a*a <= n; a++){
        if(!(n%a)){
            return 0;
        }
    }
    return 1;
}

int rotate(int n){
    int num = n;
    int tmp;
    for(tmp = num; tmp / 10; tmp /= 10);
    int tmp2 = tmp;
    for(int i = count(num)-1; i; i--){
        tmp2 *= 10;
    }
    num -= tmp2;
    num *= 10;
    num += tmp;
    return num;
}

int is_circular_prime(int n){
    int num = n;
    do{
        if(!is_prime(num)){
            return 0;
        }
        num = rotate(num);
    }while(num!=n);

    return 1;
}
