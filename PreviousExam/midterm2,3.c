// KU ComputerProgramming I
// 20180521 2nd Midterm 3rd problem

#include <stdio.h>

int str_chars(char str[], int ch, int pos[], int maxpos){
  int cnt = 0;
  for(int i=0; str[i]; i++){
    if(str[i] == ch){
      if(cnt > maxpos){
        break;
      }
      pos[cnt] = i;
      cnt++;
    }
  }
  return cnt;
}

int main(){
  char str[] = "Hello";
  int pos[10];
  char ch = 'l';
  int i, n = str_chars(str, ch, pos, 10);
  printf("Found %d of '%c'\n", n, ch);
  for(i = 0; i < n; i++){
    printf("at %d\n", pos[i]);
  }
}
