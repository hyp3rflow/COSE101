#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
  int array[16];
  int tmp = 0;
  for(int i=0; i<16; i++){
    array[i] = rand()%20+1;
    while(1){
      for(int j=-1; i+j>=0; j--){
        if(array[i+j] == array[i]){
          tmp++;
        }
      }
      if(tmp != 0){
        array[i] = rand()%20+1;
        tmp = 0;
      }
      else if(tmp == 0){
        break;
      }
    }
  }

  for(int i=0; i<16; i++){
    printf("Array[ %d ] = %d\n", i, array[i]);
  }
}
