// KU ComputerProgramming I
// 20180521 2nd Midterm 1th problem

#include <stdio.h>
int x = 10;
int f(){
  return x++;
}

int g(int x){
  x++;
  return f(x);
}

int main(){
  for (int x=0; x<5; ++x){
    printf("%d ", f(x*2));
    printf("%d ", g(x+2));
    printf("%d\n", x);
  }
  printf("\n");
}
