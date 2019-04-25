#include <stdio.h>

int count(int num){
  int result = 1;
  int i = 1;
  for(; num/10 != 0; i++, num/=10);
  for(;i--;) result *= 10;
  return result;
}

void print_max(int A[], int nelem){
  for(int i = 0; i < nelem; i++){
    for(int j = 0; j < nelem - 1; j++){
      if(A[j] * count(A[j+1]) < A[j+1] * count(A[j])){
        int tmp = A[j];
        A[j] = A[j+1];
        A[j+1] = tmp;
      }
    }
  }

  for(int i = 0; i < nelem; i++){
    printf("%d", A[i]);
  }
  printf("\n");
}

int main(){
  int C[] = {50,2,1,9};
  print_max(C,4);
  int D[] = {20, 500, 1, 9};
  print_max(D,4);
  return 0;
}
