#include <stdio.h>

int is_pair_isogram(char str[]){
  int count[26];
  for(int j = 0; j<26; j++){
    count[j] = 0;
  }
  for(int i = 0; str[i]; i++){
    count[str[i]-'a']++;
  }
  for(int k = 0; k<26; k++){
    if(!(count[k] == 2 || count[k] == 0))
      return 0;
  }
  return 1;
}

void main(){
  char str[100];
  printf("Enter word: ");
  scanf("%s", str);
  if (is_pair_isogram(str))
    printf("%s is a pair isogram\n", str);
  else
    printf("%s is NOT a pair isogram\n", str);
}
