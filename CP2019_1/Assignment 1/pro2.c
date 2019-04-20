#include <stdio.h>

int main(void)
{
    int m, n;
    printf("Enter two numbers: ");
    scanf_s("%d %d", &m, &n);
    printf("The sum is %d\n", m+n);
    printf("The product is %d\n", m*n);
    printf("The difference is %d\n", m-n);
    printf("The quotient is %d\n", m/n);
    printf("The remainder is %d\n", m%n);
    
    return 0;
}
