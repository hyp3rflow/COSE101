#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(int a);

int main(void)
{
    int cnt = 1;
    int cntT = 0, cntH = 0;
    
    srand((unsigned int) time(NULL));
    
    while (cnt <= 100)
    {
        if (flip(rand()) == 1)
        {
            printf("Tails ");
            cntT++;
        }
        else
        {
            printf("Heads ");
            cntH++;
        }
        
        if (cnt % 10 == 0)
        {
            printf("\n");
        }
        
        cnt++;
    }
    
    printf("\nThe total number of Heads was %d", cntH);
    printf("\nThe total number of Tails was %d\n", cntT);
    return 0;
}

int flip(int a)
{
    if (a % 2 == 0) return 0;
    else return 1;
}
