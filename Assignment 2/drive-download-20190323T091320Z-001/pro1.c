#include <stdio.h>

int main(void)
{
    int m, n;
    int total = 0;
    int num1, num2;
    
    printf("Enter two integers : ");
    scanf_s("%d %d", &m, &n);
    
    if (m >= n)
    {
        num1 = m;
        num2 = n;
    }

    if (m < n)
    {
        num1 = n;
        num2 = m;
    }
    
    while (num1 >= num2)
    {
        total += num2++;
    }
    
    printf("The sum of all integers between %d and %d is %d\n", m, n, total);
    
    return 0;
}


