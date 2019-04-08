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
    
    /*
     예외를 잡아야하는 경우
     4->5, 9->10, 40->50, 90->100
     */
    
    do {
        printf("%d\t\t", cnt);
        num = cnt;
        
        // 90 -> 100 모듈
        if (num >= 90)
        {
            printf("XC");
            num %= 90;
        }
        // 100일때
        else if (num == 100)
        {
            printf("C"); //done
        }
        // 아닐때
        else
        {
            // 40 -> 50 모듈
            if (num / 50)
            {
                printf("L");
                num %= 50;
            }
            else if (40 <= num && num < 50)
            {
                printf("XL");
                num %= 40;
            }
        }
        
        // 9->10 모듈
        if (num / 10)
        {
            subcnt = num / 10;
            while (subcnt > 0)
            {
                printf("X");
                subcnt--;
            }
            num %= 10;
        }
        // 9일 때
        else if (num == 9)
        {
            printf("IX");
            num %= 9; // done
        }
        // 아닐 때
        else
        {
            
        }
        
        // 4->5 모듈
        if (num / 5)
        {
            subcnt = num / 5;
            while (subcnt > 0)
            {
                printf("V");
                subcnt--;
            }
            num %= 10;
        }
        // 4일 때
        else if (num == 4)
        {
            printf("IV");
            num %= 4; // done
        }
        // 아닐 때
        {
            
        }
        
        // 1 모듈
        if (num / 1)
        {
            subcnt = num / 1;
            while (subcnt > 0)
            {
                printf("I");
                subcnt--;
            }
            num %= 1; // done
        }
        
        
        printf("\n");
        cnt++;
        
    } while (cnt >= input);
    
    return 0;
}//
//  tool.c
//  KU CP I
//
//  Created by 최용욱 on 25/03/2019.
//  Copyright © 2019 hyperflow. All rights reserved.
//

#include <stdio.h>
