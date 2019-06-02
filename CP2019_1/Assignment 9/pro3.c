#include <stdio.h>

int main(){
  int matrix[2][3] = {0};
  int tmp;

  FILE *f1 = fopen("input1.txt", "r");
  FILE *f2 = fopen("input2.txt", "r");
  FILE *f3 = fopen("result.txt", "w");

  printf("input1 matrix:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      fscanf(f1, "%d", &tmp);
      printf("%5d", tmp);
      matrix[i][j] += tmp;
    }
    printf("\n");
  }
  printf("\n");

  printf("input2 matrix:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      fscanf(f2, "%d", &tmp);
      printf("%5d", tmp);
      matrix[i][j] += tmp;
    }
    printf("\n");
  }
  printf("\n");

  fclose(f1);
  fclose(f2);

  for(int i=0; i<2; i++){
    fprintf(f3, "%d\\%d\\%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
  }

  printf("result matrix:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%5d", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  fclose(f3);

  return 0;
}
