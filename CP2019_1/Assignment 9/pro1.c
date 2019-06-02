#include <stdio.h>

int main(){
  char fr[30];
  char fw[30];

  char tmp[100];

  printf("Enter the name of file to read: ");
  scanf("%s", fr);
  printf("Enter the name of file to write: ");
  scanf("%s", fw);
  
  FILE *read = fopen(fr, "r");
  printf("read file opened!\n");
  FILE *write = fopen(fw, "w");
  printf("write file opened!\n");
  while(fgets(tmp, 100, read) != NULL){
    if(tmp[0] && tmp[0] != '\n'){
      fprintf(write, "%s", tmp);
    }
  }
  printf("Copy txt complete!");
  
  fclose(read);
  fclose(write);

  return 0;
}
