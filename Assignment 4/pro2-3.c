#include <stdio.h>

long long factorial(int a);
long long combination(int n, int r);

int main(void){
  int n, r;
  while(1){
    printf("Enter the inputs : ");
    scanf("%d %d", &n, &r);
    if(5<=n && r <= 20 && n >= r){
      break;
    }
    else{
      printf("Input Error!\n\n");
    }
  }
  printf("nCr : %lld", combination(n, r));


  
}

long long factorial(int a){
  if(a==0){
  return 1;
  }
  else{
  return a*factorial(a-1);
  }
}

long long combination(int n, int r){
  return factorial(n)/(factorial(r)*factorial(n-r));
}
