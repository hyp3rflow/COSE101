#include <stdio.h>

void gcd(int a, int b);

int main(void){
  int a, b;
  while(1){
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    if (a>0 && b>0){
      break;
    }
    else{
      printf("Wrong Input! Try again!\n\n");
    }
  }
  printf("GCD pf %d and %d is %d\n", a, b, gcd(a, b));
  return 0;
}

void gcd(int a, int b){

  if(b!=0){
    return gcd(b, a%b);
  }
  else{return a;}

}
