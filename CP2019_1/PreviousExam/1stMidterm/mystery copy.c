// KU Computer Programming I 
// 20180423 1st Midterm 7th problem

#include <stdio.h>

int mystery(int n, int val);

int main(void){
  int n, val;

  while(1){
    printf("input the n, val: ");
    scanf("%d %d", &n, &val);
    
    if(n == -1 && val == -1){
      break;
    }
    else{
      printf("%d", mystery(n, val));
    }
    
    return 0;
  }
}

int mystery(int n, int val){
  for(int num = 1, p = 0; p<32; p++, num *= 2){
    int tmp = num;
    for(int i = 0; i < n-1; i++){
      tmp /= 10;
    }
    if(tmp == 0) continue;
    if(tmp % 10 == val){
      return num;
    }
  }
  return 0;
}
