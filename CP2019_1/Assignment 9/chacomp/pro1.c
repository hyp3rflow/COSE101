#include <stdio.h>
#define MAX 10

void bubblesort(int* arr);

int main(){
  int arr[MAX] = {10, 5, 1, 6, 3, 9, 4, 2, 8, 7};

  bubblesort(arr);

  for(int i=0; i<MAX; i++){
    printf("%d ", arr[i]);
  }
  
  return 0;
}

void bubblesort(int *arr){
  for(int i=0; i<MAX-1; i++){
    for(int j=0; j<MAX-1; j++){
      if(arr[j] > arr[j+1]){
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}
