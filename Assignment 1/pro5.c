#include <stdio.h>

int main(void)
{
    int n;
    int a, b, c, d, e;
    int result;
    result = 0;
    
    printf("Input: ");
    scanf_s("%d", &n);
    
    a = n/10000;
    b = (n%10000)/1000;
    c = (n%1000)/100;
    d = (n%100)/10;
    e = n%10;
    
    if (a%2 == 1)
        result = result + a;
    if (b%2 == 1)
        result = result + b;
    if (c%2 == 1)
        result = result + c;
    if (d%2 == 1)
        result = result + d;
    if (e%2 == 1)
        result = result + e;
    
    printf("Output:\n");
    printf("%d   %d   %d   %d   %d\n", e, d, c, b, a);
    printf("%d\n", result);
    
    return 0;
}

