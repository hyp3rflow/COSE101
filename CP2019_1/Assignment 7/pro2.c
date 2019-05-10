#include <stdio.h>
#include <string.h>

int main(){
  char str[50];
  int arr[26] = {0};

  printf("Enter three lines of text:\n");
  
  for(int i=0; i<3; i++){
    fgets(str, 100, stdin);
    for(int chr='a'; chr<'z'+1; chr++){
      while(strchr(str, chr) != NULL){
        arr[chr-'a']++;
        *strchr(str, chr) = '#';
      }
      while(strchr(str, chr-'a'+'A') != NULL){
        arr[chr-'a']++;
        *strchr(str, chr-'a'+'A') = '#';
      }
    }
  }

  printf("\nThe total occurrences of each character:\n");
  for(int i=0; i<26; i++){
    printf("%c: %2d\n", i+'a', arr[i]);
  }

  return 0;
}
