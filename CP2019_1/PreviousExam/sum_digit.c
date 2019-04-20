//
//

#include <stdio.h>

int sum_digit(char str[]){
  int i;
  int sum = 0;
  
  for(i = 0; str[i]; i++){
    if(str[i] <= '9' && '0' <= str[i]){
      sum += str[i] - '0';
    }
  }

  return sum;
}

int main(void){
  char A[] = "Korea University, 2017";
  char B[] = "Pyeong Chang 2018 Olympic";

  printf("KU 2017: %d\n", sum_digit(A));
  printf("PC 2018: %d\n", sum_digit(B));

  return 0;
}
