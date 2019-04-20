#include <stdio.h>

int main(void)
{
    int counter = 1;
    int max;
    int input;
    
    do{
        printf("Enter the number: ");
        if (counter == 1)
        {
            scanf("%d", &max);
        }
        if (counter != 1)
        {
            scanf("%d", &input);
            if (input > max)
            {
                max = input;
            }
        }
        counter++;
    } while(counter<=5);
    
    printf("Largest is %d\n", max);
    
    return 0;
}

