//
//
//
#include <stdio.h>

void main(){
  int i=0, j=0, sum=0;
  
  while(i<10){
    sum += i;
    if (sum%2)
      continue;
    else if(sum>10)
      break;
    i++;
  }

  printf("A: %d\n", sum);
  sum = 0;
  
  do{
    sum = sum + i + j;
    j++;
  } while(j>20);
  printf("B: %d\n", sum);
}
