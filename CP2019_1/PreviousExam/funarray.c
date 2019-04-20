// KU ComputerProgramming I
// 20170426 1st Midterm 4th problem

#include <stdio.h>

void fun1(int array[], int n);
void fun2(int array[], int n);

int main(void){
  int array[] = {1,2,3,4,5};
  fun1(array,0);
  printf("\n");
  fun2(array,1);
  printf("\n");
  fun1(array,2);
  printf("\n");
  fun2(array,3);
  printf("\n");
  return 0;
}

void fun1(int array[], int n){
  for(int i=0; i<=n; i++){
    printf("%d, ", array[i] += n -i);
  }
}

void fun2(int array[], int n){
  for(int i=0; i<n; i++){
    printf("%d, ", array[i] += i);
  }
}
