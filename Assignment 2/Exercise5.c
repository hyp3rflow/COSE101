#include <stdio.h>

int main(void)
{
    int counter = 1;
    int sales;
    int salary;
    while (counter <= 4)
    {
        printf("Enter Employee %d's sales in dollars: ", counter);
        scanf("%d", &sales);
        
        if (sales >= 3000)
        {
            salary = 200 + 0.09 * sales;
        }
        else {
            salary = 200;
        }
        
        printf("Employee %d's salary is : %d\n\n", counter++, salary);
    }
    
    return 0;
}
