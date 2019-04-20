#include <stdio.h>

int main(void)
{
    int cnt;
    int num;
    printf("Decimal\t\tBinary\n");
    
    for (cnt=1; cnt<=15; cnt++)
    {
        printf("%d\t\t", cnt);
        num = cnt;
        
        num / 8 ? printf("1") : printf("0");
        num %= 8;
        
        num / 4 ? printf("1") : printf("0");
        num %= 4;
        
        num / 2 ? printf("1") : printf("0");
        num %= 2;
        
        num / 1 ? printf("1") : printf("0");
        num %= 1;
        
        printf("\n");
    }
    
}
