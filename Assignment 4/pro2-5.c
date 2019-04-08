// Hanoi Tower Problem
//
//

#include <stdio.h>

void tower(int c, int start, int end, int temp);

int main(void){
  int input;

  printf("Enter the number of disks: ");
  scanf("%d", &input);

  tower(input, 1, 3, 2);

  return 0;
}

void tower(int c, int start, int end, int temp){
  if(c == 1){
    printf("%d --> %d\n", start, end);
  }
  else{
    tower(c-1, start, temp, end);
    printf("%d --> %d\n", start, end);
    tower(c-1, temp, end, start);
  }
}
