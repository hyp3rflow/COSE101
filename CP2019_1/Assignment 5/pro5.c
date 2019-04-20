#include <stdio.h>

void Sorting(int scores[][5], int average[]);

int main(){
  int scores[5][5];
  int average[5] = {0};

  for(int i=0; i<5; i++){
    printf("INDEX %d\n", i);
    printf("Enter 5 Quiz scores :\n");
    for(int j=0; j<5; j++){
    scanf("%d", &scores[i][j]);
    }
    printf("\n");
    
  }

  Sorting(scores, average);

  printf("From Highest Scores to Lowest :\n");
  for(int i=0; i<5; i++){
    printf("%d ", average[i]);
  }

  return 0;
}

void Sorting(int scores[][5], int average[]){
  int tmp;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      average[i] += scores[i][j];
    }
    average[i] /= 5;
  }

  for(int i=0; i<5; i++){
    for(int j=0; j<4; j++){
      if(average[j] < average[j+1]){
        tmp = average[j];
        average[j] = average[j+1];
        average[j+1] = tmp;
      }
    }
  }
}
