//
//

#include <stdio.h>
void fold_size(int sides[2], int fold_count){
  int side1 = sides[0], side2 = sides[1];
  while(fold_count){
    if(side1 >= side2){
      side1 /= 2;
    }
    else{
      side2 /= 2;
    }

    fold_count--;
  }
  if(side1 >= side2){
    sides[0] = side1;
    sides[1] = side2;
  }
  else{
    sides[0] = side2;
    sides[1] = side1;
  }
}

int main(void){
  int side1, side2, sides[2], fold_count;
  printf("Enter side1: ");
  scanf("%d", &side1);
  printf("Enter side2: ");
  scanf("%d", &side2);
  printf("Fold count: ");
  scanf("%d", &fold_count);
  sides[0] = side1;
  sides[1] = side2;
  fold_size(sides, fold_count);
  printf("Size = (%d, %d)\n\n", sides[0], sides[1]);

  return 0;
}
