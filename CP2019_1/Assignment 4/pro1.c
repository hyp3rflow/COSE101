#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);

int main(void)
{
    int cnt = 1;
    double a = 1, b = 1;
    while (cnt != 4)
    {
        printf("Enter the sides of the triangle: ");
        scanf("%lf %lf", &a, &b);
        
        if (a <= 0 || b <= 0)
        {
            printf("The input number should be larger than 0!\n\n");
            continue;
        }
        else
        {
            printf("Hypotenuse:  %.1f\n\n", hypotenuse(a,b));
        }
        
        cnt++;
    }
    return 0;
}

double hypotenuse(double a, double b)
{
    return sqrt(a*a+b*b);
}
