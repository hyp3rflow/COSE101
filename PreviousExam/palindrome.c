#include<stdio.h>

int is_palin(int num){
  int rev = 0;
  int tmp = num;

  while(tmp!=0){
    rev = rev*10 + tmp%10;
    tmp /= 10;
  }

  return rev == num;
}

int main(){
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  if (is_palin(num)){
    printf("%d is a palindrome\n",num);
  }
  else{

    printf("%d is NOT\n",num);
  }
  return 0;
}
