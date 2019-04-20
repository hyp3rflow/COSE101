#include <stdio.h>

int main(void)
{
    int pn, q = 0;
    double total = 0;

    printf("Enter pairs of item numbers and quantities.\nEnter -1 for the item number to end input\n");
    
    while (q != -1)
    {
        scanf("%d %d", &pn, &q);
        switch (pn) {
            case 1:
                total += 2.98 * q;
                break;
                
            case 2:
                total += 4.50 * q;
                break;
                
            case 3:
                total += 9.98 * q;
                break;
                
            case 4:
                total += 4.49 * q;
                break;
                
            case 5:
                total += 6.87 * q;
                break;
                
            default:
                printf("Invalid product code: %d\nQuantities: %d", pn, q);
                break;
            
        }
    }

    printf("The total retail value was: %.2f\n", total);
    
    return 0;
}
