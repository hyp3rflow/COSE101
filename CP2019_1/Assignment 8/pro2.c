#include <stdio.h>
#include <limits.h>

void power2(unsigned short num, unsigned short pow);

int main(){
  unsigned short inp1, inp2;
  
  printf("Enter two integers: ");
  scanf("%hd %hd", &inp1, &inp2);
  
  power2(inp1, inp2);

  return 0;
}

void power2(unsigned short num, unsigned short pow){
  unsigned short input1 = num;
  unsigned short input2 = pow;
  unsigned short rnput1 = num;
  unsigned short rnput2 = pow;

  unsigned short result;

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

}
