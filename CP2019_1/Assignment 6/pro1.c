#include <stdio.h>

void func(int *a, int *b, int *c);

int main(){
  int a, b, c;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("Before: a = %d, b = %d, c = %d\n", a, b, c);
  func(&a, &b, &c);
  printf("After: a = %d, b = %d, c = %d", a, b, c);

  return 0;
}

void func(int *a, int *b, int *c){
  (*a)++;
  *b *= *c;
  int tmp = *b;
  *b = *c;
  *c = tmp;
}
