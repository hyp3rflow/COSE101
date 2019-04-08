#include <stdio.h>

void reverse(unsigned a);

unsigned input;

int main(void){
  printf("Enter a number 1 and 999999999: ");
  scanf("%d", &input);
  printf("The number with its digits reversed is: ");
  reverse(input);

  return 0;
}

void reverse(unsigned a){

  if ( 0 < a ){
    printf("%d", a%10);
    reverse(a/10);
  }
}
