#include <stdio.h>

char keyboard[5][15] = { 
"***********",
"*abcdefghi*",
"*jklmnopqr*",
"*stuvwxyz**",
"***********" };

int similarity(int x, int y){
  int r = -1;
  int c = -1;
  int similarity = 3;
  if (x==y) return 1;
  for(int i = 1; i <= 3; i++)
    for(int j = 1; j <= 9; j++)
      if(x == keyboard[i][j]){
        r = i;
        c = j;
      }
  for(int j = -1; j<2; j++){
    for(int i = -1; i<2; i++){
      if(y == keyboard[r+i][c+j]){
        return 2;
      }
    }
  }
  return similarity;
}
void main(){
  printf("%d" ,similarity('k', 'k'));
  printf("%d" ,similarity('k', 'c'));
  printf("%d" ,similarity('k', 'v'));
}
