#include <stdio.h>

int main(void)
{
    int cnt;
    int imnotcnt;
    int imnotcnttoo;
    
    for (cnt = 1; cnt <= 5; cnt++)
    {
        imnotcnt = 5 - cnt;
        imnotcnttoo = cnt*2-1;
        while (imnotcnt > 0)
        {
            printf(" ");
            imnotcnt--;
        }
        while (imnotcnttoo > 0)
        {
            printf("*");
            imnotcnttoo--;
        }
        printf("\n");
    }
    
    for (cnt = 4; cnt >= 1; cnt--)
    {
        imnotcnt = 5 - cnt;
        imnotcnttoo = cnt*2-1;
        while (imnotcnt > 0)
        {
            printf(" ");
            imnotcnt--;
        }
        while (imnotcnttoo > 0)
        {
            printf("*");
            imnotcnttoo--;
        }
        printf("\n");
    }
}
