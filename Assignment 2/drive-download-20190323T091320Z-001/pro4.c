#include <stdio.h>

int main(void)
{
    int num1, num2;
    int factor;
    
    printf("Input two integers: ");
    scanf_s("%d %d", &num1, &num2);
    
    if (num1 % num2 == 0)
    {
        factor = num1/num2;
        printf("%d is a multiple of %d by a factor of %d\n", num1, num2, factor);
    }
    else
    {
        printf("%d is not a multiple of %d\n", num1, num2);
    }
    
    return 0;
}
