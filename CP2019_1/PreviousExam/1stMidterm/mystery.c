..// KU Computer Programming I
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
  int p = 1, num;
  int min = 1;
  for(int cnt = 0; cnt < 32; cnt++){
    for(int i = 0; i<cnt; i++){
      p*=2;
      num = p;
    }
    for(int j=1; j<n; j++){
      p/=10;
    }
    if(p <= 0){
      p = 1;
      continue;
    }
    if(p%10==val){
      return num;
    }
  }
  return 0;
}
