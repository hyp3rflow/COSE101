#include <stdio.h>

int func(char *a, char *b);

int main(){
  char string1[80];
  char string2[80];

  printf("Enter two strings: ");
  scanf("%s %s", string1, string2);

  func(string1, string2) ? printf("%s and %s are equal.", string1, string2) : printf("%s and %s are not equal", string1, string2);

  return 0;
}

int func(char *a, char *b){
  if (*(a+1) || *(b+1)){
    if(*a == *b){
      return func(a+1, b+1);
    }
    else
      return 0;
  }
  else if(*a == *b){
    return 1;
  }
  return 0;
}
