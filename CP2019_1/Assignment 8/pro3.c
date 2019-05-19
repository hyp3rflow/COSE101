#include <stdio.h>
#include <limits.h>
#include <math.h>

void reversBits(unsigned short a){
  unsigned short mask = 1;
  for(int i=0; i<sizeof(unsigned short)*CHAR_BIT; i++){
    printf("%d", a & mask ? 1 : 0);
    a >>= 1;
    if(i == 7){
      printf(" ");
    }
  }
}

int main(){
  unsigned short a, b, c;
  unsigned short mask = 1;
  unsigned short d = 0;

  mask <<= sizeof(unsigned short)*CHAR_BIT - 1;
  
  printf("Enter an unsigned integer: ");
  scanf("%hd", &a);
  b = a;
  c = b;

  printf("\n\nBefore bits are reversed:\n");
  printf("%7d = ", a);
  for(int i=0; i<sizeof(unsigned short)*CHAR_BIT; i++){
    printf("%d", mask & a ? 1 : 0);
    a <<= 1;
    if(i == 7){
      printf(" ");
    }
  }

  unsigned short remask = 1;
  for(int i=0; i<sizeof(unsigned short)*CHAR_BIT; i++){
    if(remask & c){
      d += pow(2, sizeof(unsigned short)*CHAR_BIT - i - 1);
    }
    c >>= 1;
  }

  printf("\n\nAfter bits are reversed:\n");
  printf("%7d = ", d);
  reversBits(b);

  return 0;
}
