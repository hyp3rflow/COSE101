#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int min, max;
    
    printf("Input 5 integers: ");
    scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a>b)
        max = a;
    min = b;
    
    if (c>max)
        max = c;
    if (d>max)
        max = d;
    if (e>max)
        max = e;
    if (min>e)
        min = e;
    if (min>d)
        min = d;
    if (e>max)
        max = e;
    if (min>e)
        min = e;
    
    if (min>c)
        min = c;
    if (d>max)
        max = d;
    if (e>max)
        max = e;
    if (min>e)
        min = e;
    if (min>d)
        min = d;
    if (e>max)
        max = e;
    if (min>e)
        min = e;
    
    printf("The largest value is %d\n", max);
    printf("The smallest value is %d\n", min);
    
    return 0;
}
