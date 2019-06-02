#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  char name[80];
  int stdnum;
}student;

void bubblesort(student arr[]);

int main(){
  char tmp[50];
  student arr[5];
  char *ptr;

  for(int i=0; i<5; i++){
    printf("<%d> Enter student name / student number: ", i+1);
    fgets(tmp, 50, stdin);

    ptr = strtok(tmp, "/");
    strcpy(arr[i].name, ptr);
    ptr = strtok(NULL, "/");
    arr[i].stdnum = atoi(ptr);
  }

  bubblesort(arr);

  printf("\n%-15s%s\n", "ID", "Name");
  for(int i=0; i<5; i++){
    printf("%-15d%s\n", arr[i].stdnum, arr[i].name);
  }
  
  return 0;
}

void bubblesort(student arr[]){
  for(int i=0; i<5-1; i++){
    for(int j=0; j<5-1; j++){
      if(arr[j].stdnum > arr[j+1].stdnum){
        int tmp = arr[j].stdnum;
        arr[j].stdnum = arr[j+1].stdnum;
        arr[j+1].stdnum = tmp;

        char nametmp[80];
        strcpy(nametmp, arr[j].name);
        strcpy(arr[j].name, arr[j+1].name);
        strcpy(arr[j+1].name, nametmp);
      }
    }
  }
}
