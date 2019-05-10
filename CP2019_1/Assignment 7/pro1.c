#include <stdio.h>
#include <stdlib.h>

int main(){
  char *str;
  int sum = 0;
  for(int i = 0; i<4; i++){
    printf("Enter an integer string: ");
    scanf("%s", str);
    sum += atoi(str);
  }

  printf("\nThe total of the values is %d\n", sum);

  return 0;
}
