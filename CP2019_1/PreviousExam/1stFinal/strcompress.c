#include <stdio.h>

void strcompress(char* input, char* output){
    char tmp = *input;
    input++;
    int cnt = 1;
    int wcnt = 0;
    for(; *input; input++){
        if(*input == tmp){
            cnt++;
        }
        else{
            if(cnt != 1){
                output[wcnt++] = '0' + cnt;
                output[wcnt++] = tmp;
            }
            else{
                output[wcnt++] = tmp;
            }
            cnt = 1;
            tmp = *input;
        }
    }
    if(cnt != 1){
        output[wcnt++] = '0' + cnt;
        output[wcnt++] = tmp;
    }
    else{
        output[wcnt++] = tmp;
    }
    output[wcnt] = '\0';
}

int main(){
    char str[] = "zzzzzzzzaaabbcdddeee";
    char comp[BUFSIZ];
    strcompress(str, comp);
    printf("Compress: %s\n", comp);
    // Compress: 8z3a2bc3d3e
}
