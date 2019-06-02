#include <stdio.h>
#include <string.h>

int main(){
  char input[30];
  char word[30];

  int wordcnt = 0;
  int cnt = 0;
  
  char line[300];
  char *tok;

  printf("Enter the file name and word : ");
  scanf("%s %s", input, word);

  FILE *f = fopen(input, "r");

  while(!feof(f)){
    fgets(line, sizeof(line), f);
    
    tok = strtok(line, " ,().&-\n\"");
    while(tok){
      wordcnt++;
      if(!strcmp(tok, word)){
        cnt++;
      }
      tok = strtok(NULL, " ,().&-\n\"");
    }
  }

  printf("The finding ratio : %d/%d", cnt, wordcnt);

  return 0;
}
