#include <stdio.h>

void strdecompress(char *input, char *output){
    int wcnt = 0;
    int tmpnum;
    char tmp;
    while(*input){
        if('0' < *input && *input < '9' + 1){
            tmpnum = (*input++) - '0';
            tmp = *input++;
            for(; tmpnum; tmpnum--){
                output[wcnt++] = tmp;
            }
        }
        else{
            output[wcnt++] = *input++;
        }
    }
    output[wcnt] = '\0';
}

int main(){
    char comp[] = "8z3a2bc3d3e";
    char decomp[BUFSIZ];
    strdecompress(comp, decomp);
    printf("Decompress: %s\n", decomp);
    // Decompress: zzzzzzzzaaabbcdddeee
}
