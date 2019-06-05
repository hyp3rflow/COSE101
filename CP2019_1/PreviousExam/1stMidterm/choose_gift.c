// KU ComputerProgramming I
// 20180521 2nd midterm 2nd problem
//
#include <stdio.h>

void choose_gifts(float prices[], int nprices, int gifts[]){
  float min, tmp;
  tmp = prices[0] - prices[1];
  if (tmp < 0){
    min = -1 * tmp;
  }
  else{
    min = tmp;
  }
  for(int i=0; i<nprices; i++){
    for(int j=i+1; j<nprices; j++){
      tmp = prices[i] - prices[j];
      if (tmp < 0){
        tmp *= -1;
      }
      if (tmp < min){
        gifts[0] = prices[i];
        gifts[1] = prices[j];
        min = tmp;
      }
    }
  }

}

int main(){
  float prices[] = {7, 3, 6};
  int gifts[2];
  choose_gifts(prices, 3, gifts);
  printf("Recommended gifts are: %d and %d\n", gifts[0], gifts[1]);
}
