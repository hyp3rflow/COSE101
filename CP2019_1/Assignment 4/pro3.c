#include <stdio.h>

int ulcase(char a);

int main(void)
{
    char input;
    printf("Enter the Character : ");
    scanf("%c", &input);
    if (ulcase(input) == 0) printf("%c: Uppercase\n", input);
    else if (ulcase(input) == 1) printf("%c: Lowercase\n", input);
    else printf("INPUT IS NOT AN ALPHABET\n");
    
    return 0;
}

int ulcase(char a)
{
    if (65 <= a && a <= 90)
    {
        return 0;
    }
    else if (97 <= a && a <= 122)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
