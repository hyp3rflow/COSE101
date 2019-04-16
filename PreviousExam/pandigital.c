#include <stdio.h>

int is_pandigital(int n){
  int digit[10];
  for(int i = 0; i<10; i++){
    digit[i] = 0;
  }
  while(n!=0){
    digit[n%10]++;
    n/=10;
  }
  for(int i = 0; i<10; i++){
    if(digit[i] > 1){
      return 0;
    }
  }
  return 1;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(is_pandigital(n))
    printf("%d is a pandigital", n);
  else
    printf("%d is NOT", n);

  return 0;
}
