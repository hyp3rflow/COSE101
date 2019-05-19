#include <stdio.h>
#include <limits.h>

int main(){
  unsigned short input1, input2;
  unsigned short rnput1, rnput2;
  unsigned result;

  printf("Enter two integers: ");
  scanf("%hd %hd", &input1, &input2);
  rnput1 = input1;
  rnput2 = input2;

  printf("number:\n");
  printf("%7d = ", rnput1);

  unsigned short mask = 1;
  mask <<= sizeof(unsigned short) * CHAR_BIT - 1;
  
  for(int i=0; i<sizeof(unsigned short) * CHAR_BIT; i++){
    printf("%d", input1 & mask ? 1 : 0);
    if(i == 7){
      printf(" ");
    }
    input1 <<= 1;
  }

  printf("\n\npow:\n");
  printf("%7d = ", rnput2);

  for(int i=0; i<sizeof(unsigned short) * CHAR_BIT; i++){
    printf("%d", input2 & mask ? 1 : 0);
    if(i == 7){
      printf(" ");
    }

    input2 <<= 1;
  }

  result = rnput1;
  for(int i=0; i<rnput2; i++){
    result <<= 1;
  }

  printf("\n\n%d * 2^%d = %d\n%7d = ", rnput1, rnput2, result, result);
  for(int i=0; i<sizeof(unsigned short) * CHAR_BIT; i++){
    printf("%d", result & mask ? 1 : 0);
    if(i==7){
      printf(" ");
    }

    result <<= 1;
  }

  return 0;
}
