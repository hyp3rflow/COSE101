#include <stdio.h>

#define NUM_ROW 1024
#define NUM_COL 1024

int count_summit(double h[5][5], int nrow, int ncol){
  int num_summit = 0;
  int cnt=0;
  for(int i = 1; i < nrow-1; i++){
    for(int j = 1; j< ncol-1; j++){
      for(int k = -1; k<2; k++){
        for(int l = -1; l<2; l++){
          if(k==0 && l==0)
            continue;
          if(h[i+k][j+l] < h[i][j])
            cnt++;
        }
      }

      if(cnt == 8){
        num_summit++;
        cnt = 0;
      }
      else{
        cnt = 0;
      }
    }
  }
  return num_summit;
}

int main(){
  double h[5][5]
    = {{1,2,3,4,1},
      {3,4,3,1,1},
      {1,2,3,4,1},
      {1,5,3,3,1},
      {1,2,3,3,1}};
  int num_summit = count_summit(h, 5, 5);
  printf("%d summits exist.\n", num_summit);
}
