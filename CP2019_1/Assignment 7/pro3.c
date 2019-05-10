#include <stdio.h>
#include <string.h>

int main(){
  char *ptr;
  char *ptr2;
  char arr[50];

  int result[20] = {0};

  printf("Enter three lines of text:\n");

  for(int i=0; i<3; i++){
    fgets(arr, 50, stdin);
 
    ptr = arr;
    while(*ptr){
      if(*ptr == '.' || *ptr == '\n'){
        *ptr = ' ';
      }
      ptr++;
    }
    
    ptr2 = strtok(arr, " ");
    while(ptr2){
      if(*ptr2 != ' '){
        result[strlen(ptr2)]++;
      }
      ptr2 = strtok(NULL, " ");
    }
  }

  printf("\n");

  for(int i=1; i<20; i++){
    if(result[i]){
      printf("%d words of length %d\n", result[i], i);
    }
  }

  return 0;
}
