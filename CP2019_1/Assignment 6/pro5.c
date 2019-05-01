#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[10];

  srand((unsigned)time(NULL));

  for(int i=0; i<10; i++){
    arr[i] = rand()%100+1;
    printf("%d ", arr[i]);
  }

  printf("\n");

  for(int i=9; i>=0; i--){
    printf("%d ", *(arr+i));
  }

  return 0;
}
