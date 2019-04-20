#include <stdio.h>

int main(void)
{
    int n;
    printf("Input an integer: ");
    scanf_s("%d", &n);
    
    if(n%2 == 0)
        printf("%d is an even integer\n", n);
    if(n%2 == 1)
        printf("%d is an odd integer\n", n);
    
    return 0;
}
