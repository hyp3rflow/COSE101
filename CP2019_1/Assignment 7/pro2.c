#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char str[80];
  int arr[26] = {0};

  printf("Enter three lines of text:\n");
  
  for(int i=0; i<3; i++){
    fgets(str, 80, stdin);
    for(char *ptr = str; *ptr != '\n'; ptr++){
      *ptr = tolower(*ptr);
    }
    for(int chr='a'; chr<'z'+1; chr++){
      while(strchr(str, chr) != NULL){
        arr[chr-'a']++;
        *strchr(str, chr) = '#';
      }
    }
  }

  printf("\nThe total occurrences of each character:\n");
  for(int i=0; i<26; i++){
    printf("%c: %2d\n", i+'a', arr[i]);
  }

  return 0;
}
