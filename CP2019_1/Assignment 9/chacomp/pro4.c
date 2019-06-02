#include <stdio.h>

typedef struct{
  int lowercount[26];
  int uppercount[26];
}chcount;

int main(){
  char tmp[100];

  chcount cc[3] = {0};

  printf("Enter three lines of text :\n");
  for(int i=0; i<3; i++){
    fgets(tmp, 100, stdin);
    for(int j=0; tmp[j]; j++){
      if(tmp[j] >= 'a' && tmp[j] <= 'z'){
        cc[i].lowercount[tmp[j]-'a']++;
      }
      else if(tmp[j] >= 'A' && tmp[j] <= 'Z'){
        cc[i].uppercount[tmp[j]-'A']++;
      }
    }
  }
  
  printf("0\t\t1\t\t2\n");
  for(int i=0; i<26; i++){
    for(int j=0; j<3; j++){
      printf("%c : %d %c : %d\t", 'a'+i, cc[j].lowercount[i], 'A'+i, cc[j].uppercount[i]);
    }
    printf("\n");
  }

  return 0;
}
