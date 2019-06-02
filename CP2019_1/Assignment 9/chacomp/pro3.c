#include <stdio.h>
#include <string.h>

int cnt = 0;

typedef struct{
  char word[20];
  int count;
  int isWritten;
}wordutility;

int main(){
  char tmp[100];
  char *ptr;

  wordutility wu[100];

  printf("Enter three lines of text:\n");
  for(int i=0; i<3; i++){
    fgets(tmp, 100, stdin);
    ptr = strtok(tmp, " ,.\n");
    int tmpcnt = 0;
    while(ptr){
      if(*ptr && *ptr != ' '){
        for(int j=0; j<cnt; j++){
          if(!strcmp(wu[j].word, ptr)){
            tmpcnt++;
            wu[j].count++;
          }
        }
        if(!tmpcnt){
          strcpy(wu[cnt].word, ptr);
          wu[cnt].count = 1;
          wu[cnt].isWritten = 1;
          cnt++;
        }
      }
      ptr = strtok(NULL, " ,.\n");
      tmpcnt = 0;
    }
  }

  printf("\n");

  for(int i=0; i<cnt; i++){
    printf("%s appeared %d time\n", wu[i].word, wu[i].count);
  }

  return 0;
}
