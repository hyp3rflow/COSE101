#include <stdio.h>

int main(void)
{
    int base = -1;
    int exponent = -1;
    int output;
    int exp;
    
    while (base < 0)
    {
        printf("Enter the base number: ");
        scanf("%d", &base);
    }
    
    while(exponent < 0)
    {
        printf("Enter the exponent number: ");
        scanf("%d", &exponent);
    }
    
    exp = exponent;
    output = base;
    
    if (exp == 0)
    {
        output = 1;
    }

    while (exp > 1)
    {
        output *= base;
        exp--;
    }
    
    printf("%d^%d is %d\n", base, exponent, output);
    
    return 0;
}
