#include <stdio.h>

int x = 10;

void f(){
  x++;
  printf("%d ", x);
}

void g(int x){
  x += 5;
  printf("%d ", x);
}

int main(){
  for (int x=5; x>0; x--){
    f();
    g(x);
    printf("%d\n",x);

  }
  printf("\n");
}
