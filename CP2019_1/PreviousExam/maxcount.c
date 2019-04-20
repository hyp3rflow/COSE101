// KU ComputerProgramming I
// 20180521 2nd Midterm 4th problem

#include <stdio.h>

int maxcount(int list[], int nelem){
  int max = list[0], cnt = 1;
  for(int i = 1; i<nelem; i++){
    if(list[i] > max){
      max = list[i];
      cnt = 1;
    }
    else if(list[i] == max){
      cnt++;
    }
  }
  return cnt;
}

int main(void){
  int list[] = {3,9,7,5,9,8,2,4,9};
  printf("%d", maxcount(list, 9));

  return 0;
}
