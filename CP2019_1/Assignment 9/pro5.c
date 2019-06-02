#include <stdio.h>

struct employee{
  int employee_id;
  char *name;
}

int main(){
  int tmpid;
  int input = 0;

  struct employee table = {0, ""};

  FILE *fw = fopen("table.txt", "w");

  while(input != 4){
    printf("==============================\n");
    printf("MENU:\n");
    printf("==============================\n");
    printf("1. Add a record\n");
    printf("2. Display the file\n");
    printf("3. Update the record\n");
    printf("4. Exit\n");
    printf("==============================\n");
    printf("Enter your choice: ");
    
    scanf("%d", &input);

    switch(input){
      case 1:
        printf("\nENTER THE EMPLOYEE ID :\n");
        scanf("%d", table.employee_id);
        printf("ENTER THE EMPLOYEE NAME :\n");
        fgets(table.name, 80, stdin);
        break;

      case 2:
        FILE *fr = fopen("table.txt", "r");

        printf("ID\tNAME");

        
        
    }
  }
}
