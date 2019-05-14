#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char *ptr;
  char *ptr2;
  char arr[80];

  int result[20] = {0};

  printf("Enter three lines of text:\n");

  for(int i=0; i<3; i++){
    fgets(arr, 80, stdin);
 
    ptr = arr;
    while(*ptr){
      if(*ptr == '.' || *ptr == '\n'){
        *ptr = ' ';
      }
      ptr++;
    }
    
    ptr2 = strtok(arr, " ");
    while(ptr2){
      if(isalpha(*ptr2)){
        result[strlen(ptr2)]++;
      }
      ptr2 = strtok(NULL, " ");
    }
  }

  printf("\n");

  for(int i=1; i<20; i++){
    if(result[i]){
      printf("%d %s of length %d\n", result[i],result[i]>1 ? "words" : "word" , i);
    }
  }

  return 0;
}
