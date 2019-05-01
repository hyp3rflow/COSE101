#include <stdio.h>

void glue(char *s1, char *s2);

int main(){
  char string1[80];
  char string2[80];
  printf("Enter two strings: ");
  scanf("%s %s", string1, string2);

  glue(string1, string2);

  printf("%s", string1);

  return 0;
}

void glue(char *s1, char *s2){
  while(*s1){
    s1++;
  }
  while(*s2){
    *s1 = *s2;
    s1++;
    s2++;
  }
  *s1 = 0;
}
