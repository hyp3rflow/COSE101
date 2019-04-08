#include <stdio.h>

int main(void)
{
    int n;
    int number = -1;
    int factorial = 1;
    
    while (number < 0)
    {
        printf("Enter a positive integer : ");
        scanf("%d", &number);
    }
    
    n = number;
    
    while (n>=0)
    {
        if (n==0)
        {
            factorial *= 1;
        }
        else {
            factorial *= n;
        }
        
        --n;
    }
    
    printf("%d! is %d\n", number, factorial);
    
    return 0;
}
