// KU ComputerProgramming I
// 20180423 1st Midterm 4th problem

#include <stdio.h>

int bool(int a){
  int b = a++;
  printf("x=%d\n", b);
  return a;
}

void main(){
  int a = 1;
  int b = 0;
  if (a || (b = bool(a)))
    printf("y=%d\n", b);
  if (a && (b = bool(a)))
    printf("z=%d\n", b);

}
