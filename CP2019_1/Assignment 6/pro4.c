#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main(){
  int (*func[3])(int, int) = {add, sub, mul};
  int i, a, b;
  while(1){
    printf("0.Addition\n1.Subtraction\n2.Multiplication\n3.End\nselect the operation: ");
    scanf("%d", &i);
    if(i == 3){
      break;
    }
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch(i){
      case 0:
        printf("\n\t%d + %d = %d\n\n", a, b, func[0](a, b));
        break;

      case 1:
        printf("\n\t%d - %d = %d\n\n", a, b, func[1](a, b));
        break;

      case 2:
        printf("\n\t%d * %d = %d\n\n", a, b, func[2](a, b));
        break;

      default:
        printf("Please input 0~3\n");
        break;
    }
  }
  printf("Exit\n");

  return 0;
}

int add(int a, int b){
  return a + b;
}

int sub(int a, int b){
  return a - b;
}

int mul(int a, int b){
  return a * b;
}
