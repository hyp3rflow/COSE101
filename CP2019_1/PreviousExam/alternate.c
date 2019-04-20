//
//
#include <stdio.h>

int alternate(int C[], int A[], int B[], int n){
  int i, p = 0;
  for(int cnt = 0; cnt<n ; cnt++){
    C[p++] = A[cnt];
    C[p++] = B[cnt];
  }
  return p;
}

int main(){
  int A[] = {1, 3, 5, 7};
  int B[] = {2, 4, 6, 8};
  int C[10];
  int nelem = alternate(C,A,B,4);
  for(int i = 0; i < nelem; i++){
    printf(" %d", C[i]);
  }
  printf("\n");
  return 0;
}
