// KU ComputerProgramming I
// 20180423 1st Midterm 6th problem

#include <stdio.h>

int len(char str[]){
  int p = 0;
  for(int i = 0; str[i]; i++){
    p++;
  }
  return p;
}

void cpy(char dest[], char src[]){
  int i;
  for(i = 0; src[i]; i++){
    dest[i] = src[i];
  }
  dest[i] = 0;
}

void remove_char(char str[], int ch){
  for(int cnt = 0; str[cnt]; cnt++){
    while(str[cnt] == ch){
      for(int i = 0; str[cnt+i]; i++){
        str[cnt+i] = str[cnt+i+1];
      }
    }
  }
}

void main(){
  char str[100];
  cpy(str, "the quick brown fox jumps over the lazy dog");
  remove_char(str,' ');
  printf("len(\"%s\") = %d\n", str, len(str));
  remove_char(str,'o');
  printf("len(\"%s\") = %d\n", str, len(str));
  cpy(str, "aaaaa");
  remove_char(str, 'a');
  printf("len(\"%s\") = %d\n", str, len(str));
}
