#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_matrix(int mat1[][6], int mat2[][6], int result[][6]);

int main(){

  srand((unsigned)time(NULL));

  int mat1[5][6];
  int mat2[5][6];
  int result[5][6] = {0};

  for(int i=0; i<2; i++){
    for(int j=0; j<5; j++){
      for(int k=0; k<6; k++){
        if(i==0){   
          mat1[j][k] = rand()%100+1;
        }
        else{
          mat2[j][k] = rand()%100+1;
        }
      }
    }
  }

  sum_matrix(mat1, mat2, result);
  
  for(int cnt = 0; cnt<3; cnt++){
    if(cnt == 2){
      printf("result:\n");
    }
    else{
      printf("matrix%d:\n", cnt+1);
    }
    for(int i=0; i<5; i++){
      for(int j=0; j<6; j++){
        if(cnt==0)
          printf("%3d ", mat1[i][j]);
        if(cnt == 1)
          printf("%3d ", mat2[i][j]);
        if(cnt == 2)
          printf("%3d ", result[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
}

void sum_matrix(int mat1[][6], int mat2[][6], int result[][6]){
  for(int j=0; j<5; j++){
    for(int k=0; k<6; k++){
      result[j][k] += mat1[j][k] + mat2[j][k];
    }
  }
}
