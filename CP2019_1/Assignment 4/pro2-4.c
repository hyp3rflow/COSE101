#include <stdio.h>

void i_to_a(int a);

int main(void){
  int input;

  while(1){
    printf("Enter the inputs : ");
    scanf("%d", &input);

    if(100000 <= input && input <= 999999){
      break;
    }
    else{
      printf("Input Error!\n");
    }
  }

  i_to_a(input);

  return 0;
}

void i_to_a(input){
  if (input != 0){
    int a = input%100;
    
    if (a>= 0 && a<=25){
      i_to_a(input/100);
      printf("%c ", a+65);
    }
    else{
      i_to_a(input/100);
      printf("%c ", (a%26) + 65);
    }
  
  }
  
  else{
    printf("%c", input);
  }
}

