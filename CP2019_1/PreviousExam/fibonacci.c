#include <stdio.h>

int fib(int n){
  int a = 0, b = 1;
  int k;
  int tmp;
  for(k=0; k<n; k++){
    tmp = b;
    b += a;
    a = tmp;
  }

  return a;
}

int main(void){
  int input;
  scanf("%d", &input);

  printf("%d", fib(input));

  return 0;
}

