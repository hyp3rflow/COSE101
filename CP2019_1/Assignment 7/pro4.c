#include <stdio.h>
#include <string.h>

void bub(char p[][50]);

int main(){
  char str[10][50];
  for(int i=0; i<10; i++){
    printf("Enter a string: ");
    scanf("%s", str[i]);
  }

  bub(str);

  printf("\nThe strings in sorted order are:\n");

  for(int i=0; i<10; i++){
    printf("%s\n", str[i]);
  }
}

void bub(char p[][50]){
  for(int i=0; i<10-1; i++){
    for(int j=0; j<10-1; j++){
      if(strcmp(p[j], p[j+1]) > 0){
        char tmp[50];
        strcpy(tmp, p[j]);
        strcpy(p[j], p[j+1]);
        strcpy(p[j+1], tmp);
      }
    }
  }
}
