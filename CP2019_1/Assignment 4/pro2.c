#include <stdio.h>

void perfect(int a);

int main(void)
{
    int cnt = 1;
    printf("For the integers from 1 to 1000\n");
    while(cnt <= 1000)
    {
        perfect(cnt);
        cnt++;
    }
    return 0;
}

void perfect(int a)
{
    int sum = 0;
    int cnt;
    cnt = a - 1;
    
    while (cnt > 0)
    {
        if (a % cnt == 0)
        {
            sum += cnt;
            cnt--;
        }
        else
        {
            cnt--;
        }
    }
    
    if (sum == a)
    {
        printf("%d is perfect\n", a);
    }
}
