#include <stdio.h>

long long factorial(int n){
  long long result=1;
  if(n == 0) return 1;
  for(int i = 0; i<n; i++){
    result*=n;
  }
  return result;
    
}

void print_max(int A[], int nelem){
  int tmp;
  for(int i = 0; i < nelem; i++){
    for(int j = 0;;j++){
      tmp = A[i];
      if(tmp/10 == 0){
        break;
      }
      tmp /= 10;
    }
  }
}

int main(){
  int C[] = {50,2,1,9};
  print_max(C,4);
  int D[] = {20,500,1,9};
  print_max(D,4);
  return 0;
}
