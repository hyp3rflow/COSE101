#include <stdio.h>

void stringReverse(char strArray[]);

int main(){
  char strArray[] = "Print this string backward.";

  printf("%s\n", strArray);

  stringReverse(strArray);

  return 0;
}

void stringReverse(char strArray[]){
  if(strArray[0] != 0){
    stringReverse(&strArray[1]);
    printf("%c", strArray[0]);
  }
}
