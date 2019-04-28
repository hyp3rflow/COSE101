#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand((unsigned)time(NULL));

  int array[20];
  int size = 0;

  for(int i=0; i<20; i++){
    int tmp = rand()%20 + 1;
    int cnt = 0;
    for(int n=0; n<i; n++){
      if(tmp == array[n]){
        cnt++;
      }
    }
    if(cnt == 0){
      array[size] = tmp;
      size++;
    }
  }

  for(int k=0; k<size; k++){
    printf("Array[ %d ] = %d\n", k, array[k]);
  }

  return 0;
}
