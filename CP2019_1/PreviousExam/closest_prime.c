//
//

#include <stdio.h>

int is_prime(int num){
  for(int i = 2; i != num; i++){
    if (num%i == 0){
      return 0; // not prime number
    }
  }
  return 1;
}

int closest_prime(int n){
  if(is_prime(n))
    return 0;
  else{
    int next_prime, prev_prime;
    for(next_prime = n+1; !(is_prime(next_prime)); next_prime++);
    for(prev_prime = n-1; !(is_prime(prev_prime)); prev_prime--);
    if(next_prime-n < n-prev_prime){
      return next_prime-n;
    }
    return n-prev_prime;
  }
}

int main(void){
  int n = 37;
  int p;
  printf("Enter number: ");
  scanf("%d", &n);
  p = closest_prime(n);
  if(p==0)
    printf("Would you believe it; %d is a prime!\n", n);
  else
    printf("%d is not prime; you missed it by that much (%d)!\n\n", n, p);
}
