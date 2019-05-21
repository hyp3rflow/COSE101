#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
 char name[80];
 int stdnum;
};

void bubblesort(struct student std[]);

int main(){

  char tmp[80];

  struct student std[5];
  
  for(int i=0; i<5; i++){
    printf("Enter student name / student number: ");
    fgets(tmp, 80, stdin);
    
    char *ptr = strtok(tmp, "/");
    strcpy(std[i].name, ptr);
    
    ptr = strtok(NULL, "/");
    std[i].stdnum = atoi(ptr);
  }

  bubblesort(std);

  printf("ID\tName\n");
  
  for(int i=0; i<5; i++){
    printf("%d\t%s\n", std[i].stdnum, std[i].name);
  }

  return 0;
}

void bubblesort(struct student std[]){
  for(int i=0; i<5-1; i++){
    for(int j=0; j<5-1; j++){
      if(std[j].stdnum > std[j+1].stdnum){
        int tmp = std[j].stdnum;
        std[j].stdnum = std[j+1].stdnum;
        std[j+1].stdnum = tmp;

        char tmpname[80];
        strcpy(tmpname, std[j].name);
        strcpy(std[j].name, std[j+1].name);
        strcpy(std[j+1].name, tmpname);
      }
    }
  }
}
