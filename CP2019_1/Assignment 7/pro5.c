#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void encryptor(char arr[][10], char ciphertext[]);
void decryptor(char arr[][10], char ciphertext[]);

int main(){
  char arr[10][10] = {
    "craftbeer",
    "metallica",
    "whitewine",
    "champagne",
    "bourgogne",
    "sandiego",
    "lafayette",
    "pinotnoir",
    "sauvignon",
    "dondiablo"
  };

  char ciphertext[10];

  srand((unsigned) time(NULL));
  encryptor(arr, ciphertext);

  decryptor(arr, ciphertext);

  return 0;
}

void encryptor(char arr[][10], char ciphertext[]){
  int key = rand()%19+1;
  char *selected = arr[rand()%10+1];
  
  strcpy(ciphertext, selected);
  for(int i = 0; ciphertext[i]; i++){
    ciphertext[i] += key;
    if(ciphertext[i] > 'z'){
      ciphertext[i] += 'a'-'z'-1;
    }
  }

  printf("\t- Encryptor -\n");
  printf("Selected word: %s\n", selected);
  printf("Selected value of the Key: %d\n", key);
  printf("Ciphertext: %s\n", ciphertext);
}

void decryptor(char arr[][10], char ciphertext[]){
  int key, findcnt = 0;
  char plaintext[10];

  printf("\t- Decorder -\n");
  printf("Ciphertext input: %s\n\n", ciphertext);

  for(key = 1; key<20; key++){
    strcpy(plaintext, ciphertext);

    for(int j = 0; plaintext[j]; j++){
      plaintext[j] -= key;
      
      if(plaintext[j] < 'a'){
        plaintext[j] += 'z'-'a'+1;
      }
    }

    printf("> Guess %d <\n", key);
    printf("  Key: %d\n", key);
    printf("  Plaintext: %s\n", plaintext);

    for(int i = 0; i<10; i++){

      if(!strcmp(plaintext, arr[i])){
        findcnt++;
      }
    }

    if(findcnt){
      printf("Found the correct answer!\n");
      printf("\nresult: '%d' was selected as the Key.\n", key);
      printf("\t\"%s\" was the plaintext\n", plaintext);

      break;
    }
    else{
      printf("Matching word not found.\n\n");
    }
  }
}
