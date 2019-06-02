#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  char name[30];
  int snum;
  int grade;
  char major[30];
}stdstr;

int main(){
  char tmp[100];
  char *ptr;
  stdstr t[5];

  FILE *fw = fopen("student_file.txt", "w");

  int input;

  for(int i=0; i<5; i++){
    printf("Name Student_number Grade Major: ");
    fgets(tmp, 100, stdin);
    
    fprintf(fw, "%s", tmp);
  }

  fclose(fw);

  FILE *fr = fopen("student_file.txt", "r");

  for(int i=0; i<5; i++){
    fgets(tmp, 100, fr);

    ptr = strtok(tmp, " ");
    strcpy(t[i].name, ptr);
    
    ptr = strtok(NULL, " ");
    t[i].snum = atoi(ptr);

    ptr = strtok(NULL, " ");
    t[i].grade = atoi(ptr);

    ptr = strtok(NULL, " \n");
    strcpy(t[i].major, ptr);
  }
  printf("Insert the student number to find: ");
  scanf("%d", &input);

  for(int i=0; i<5; i++){
    if(input == t[i].snum){
      printf("The major of student with ID %d is %s.", t[i].snum, t[i].major);
      break;
    }
  }

  return 0;
}
