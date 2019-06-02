#include <stdio.h>
#include <stdlib.h>

struct employee{
  int employee_id;
  char *name;
};

int main(){
  char tmpname[20];
  int cnt = 0;
  int input = 0;

    int tmpinput;
    int readint;
  struct employee table = {0, ""};

  FILE *fw = fopen("table.txt", "wb+");

  while(input != 4){
    system("cls");

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
            scanf("%d", &table.employee_id);
            while(!getchar());

            printf("ENTER THE EMPLOYEE NAME :\n");
            fgets(tmpname, 20, stdin);

            fseek(fw, cnt*(sizeof(int) + sizeof(tmpname)), SEEK_SET);
        
            fwrite(&table.employee_id, sizeof(table.employee_id), 1, fw);
            fwrite(tmpname, sizeof(tmpname), 1, fw);

            cnt++;

            break;

        case 2:
            printf("==============================\n");
            printf("ID\tNAME\n");
        
            printf("==============================\n");
            for(int i=0; i<cnt; i++){
                fseek(fw, i*(sizeof(int) + sizeof(tmpname)), SEEK_SET);
                fread(&table.employee_id, sizeof(int), 1, fw);
                fread(tmpname, sizeof(tmpname), 1, fw);
                printf("%d\t%s", table.employee_id, tmpname);
            }
            printf("==============================\n");
            
            break;
        
        case 3:
            printf("==============================\n");
            printf("\nENTER THE EMPLOYEE ID FOR UPDATE :\n");
            scanf("%d", &tmpinput);
            getchar();
            
            printf("ENTER THE EMPLOYEE NAME TO BE UPDATED :\n");
            fgets(tmpname, 20, stdin);

            for(int i=0; i<cnt; i++){
                fseek(fw, i*(sizeof(int) + sizeof(tmpname)), SEEK_SET);
                fread(&readint, sizeof(int), 1, fw);
                if(readint == tmpinput){
                    fseek(fw, i*(sizeof(int) + sizeof(tmpname)) + sizeof(int), SEEK_SET);
                    fwrite(&tmpname, sizeof(tmpname), 1, fw);
                    break;
                }
            }
            break;

        case 4:
            return 0;
            break;

        default:
            break;
    }
  }

  return 0;
}
