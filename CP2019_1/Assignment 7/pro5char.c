#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char arr[50];
    char result[50][50] = {0};
    char *ptr;
    int cnt = 0;
    
    printf("Enter three lines of text:\n");
    
    for(int i=0; i<3; i++){
        fgets(arr, 50, stdin);
        
        ptr = arr;
        while(*ptr){
            if(!isalpha(*ptr)){
                *ptr = ' ';
            }
            ptr++;
        }
        
        ptr = strtok(arr, " ");
        while(ptr){
            if(*ptr != ' '){
                strcpy(result[cnt], ptr);
                cnt++;
            }
            ptr = strtok(NULL, " ");
        }
    }
    
    printf("\n");
    
    for(int i=0; i<cnt; i++){
        if(!result[i][0]) continue;
        
        int numcnt = 1;
        
        for(int j=i+1; j<cnt; j++){
            if(strcmp(result[i], result[j]) == 0){
                strcpy(result[j], "\0");
                numcnt++;
            }
        }
        
        printf("\"%s\" appeared %d time\n", result[i], numcnt);
    }
}
