#include <stdio.h>

int main(void)
{
    int input;
    int cnt = 1;
    int num;
    int subcnt;
    
    printf("Input the value of range edge : ");
    scanf("%d", &input);
    
    if (input<50 || input>100)
    {
        printf("Wrong Input! range edge should be from 50 ~ 100\n");
        return 1;
    }
    
    printf("The Roman numeral equivalence Table from 1 to %d\n", input);
    
    printf("------------------------------------------------\n");
    printf("Decimal Numbers\t\tRoman Numerals\n");
    printf("------------------------------------------------\n");

    do {
        num = cnt;
        
        printf("%d\t\t", cnt);
        
        if (num == 100)
        {
            printf("C");
            num %= 100;
        }
        if (num >= 90 && num < 100)
        {
            printf("XC");
            num %= 90;
        }
        if (num >= 40 && num < 50)
        {
            printf("XL");
            num %= 40;
        }
        if (num / 50)
        {
            printf("L");
            num %= 50;
        }
        
        if (num / 10)
        {
            for (subcnt = num/10; subcnt > 0; subcnt--)
            {
                printf("X");
            }
            num %= 10;
        }
        
        if (num == 9)
        {
            printf("IX");
            num %= 9;
        }
        
        if (num / 5)
        {
            printf("V");
            num %= 5;
        }
        
        if (num == 4)
        {
            printf("IV");
            num %= 4;
        }
        if (num / 1)
        {
            for (subcnt = num/1; subcnt > 0; subcnt--)
            {
                printf("I");
            }
            num %= 1;
        }
        printf("\n");
        cnt++;
    } while (cnt <= input);
    
    return 0;
}
