#include <stdio.h>
#include <ctype.h>

int checkCase(char cha);
void convertCharCase(char *sPtr);

int main(){
  char string[] = "PoINteR is vERy ImPorTAnt in C pRoGraMMing, SO STudEnt nEEd tO pRACtiCe usING poINTer";
  printf("Original String 1 :\n%s", string);

  convertCharCase(string);

  printf("\nOriginal String 2 :\n%s\n", string);

  return 0;
}

int checkCase(char cha){
  if(islower(cha)){
    return 1;
  }
  return 0;
}

void convertCharCase(char *sPtr){
  while(*sPtr){
    if(checkCase(*sPtr)){
      *sPtr = toupper(*sPtr);
    }
    else{
      *sPtr = tolower(*sPtr);
    }
    sPtr++;
  }
}
