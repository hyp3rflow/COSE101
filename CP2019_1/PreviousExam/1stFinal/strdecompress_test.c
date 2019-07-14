#include <stdio.h>

void strdecompress(char *input, char *output){
    int cnt = 0;
    while(*input != '\0'){
        if(*input >= '0' && *input <= '9'){
            while(*input >= '0' && *input <= '9'){
                cnt *= 10;
                cnt = *(input++) - '0';
            }
            for(; cnt; cnt--){
                *(output++) = *input;
            }
        }
        else{
            *(output++) = *input;
        }
        input++;
    }
    *output = '\0';
}

int main(){
    char comp[] = "8z3a2bc3d3e";
    char decomp[BUFSIZ];
    strdecompress(comp, decomp);
    printf("Decompress: %s\n", decomp);
}
