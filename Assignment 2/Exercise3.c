#include <stdio.h>

int main(void)
{
    int digit = 10;
    int number;
    int numCopy;
    int factor;
    int sevenCounter = 0;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    
    numCopy = number;
    
    if (number > 99999)
        return 1;
    if (number < 0)
        return 1;
    
    while (numCopy>0)
    {
        factor = numCopy % digit;
        if (factor == 7)
            sevenCounter += 1;
        numCopy /= digit;
    }
    
    printf("The number %d has %d seven(s) in it\n", number, sevenCounter);
    return 0;
}
