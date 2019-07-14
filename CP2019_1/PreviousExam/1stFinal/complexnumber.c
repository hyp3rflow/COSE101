#include <stdio.h>

struct complex{
    double real;
    double imaginary;
};

typedef struct complex complex;

complex complex_add(complex x, complex y){
    complex result = {x.real+y.real, x.imaginary+y.imaginary};
    return result;
}

complex complex_mul(complex x, complex y){
    complex result = {x.real*y.real-x.imaginary*y.imaginary, x.real*y.imaginary + x.imaginary*y.real};
    return result;
}

void main(){
    complex x = {1,2}, y = {2,3};
    complex z = complex_mul(complex_add(x,y), y);
    printf("%+lf%+lfi\n", z.real, z.imaginary);
}
