#include <stdio.h>
#include <limits.h>

int main(){
  unsigned input;
  while(1){
    printf("Enter an integer: ");
    scanf("%d", &input);
    
    if(!input) break;

    int eocnt = 0;
    unsigned mask = 1;
    mask <<= sizeof(unsigned) * CHAR_BIT - 1;

    for(int i=0; i<sizeof(unsigned)*CHAR_BIT; i++){
      if(mask & input){
        eocnt++;
      }
      input <<= 1;
    }

    eocnt %= 2;

    printf("The total number of 1s in the bit representation is %s\n\n", !eocnt ? "even" : "odd");
  }

  return 0;

}
