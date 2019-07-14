#include <stdio.h>

void strcompress(char* input, char* output){
    int cnt = 1;
    char tmpchr = 0;
    char *tmp = input, *flow = output;
    while(*tmp != '\0'){
        if(tmpchr == 0){
            tmpchr = *tmp;
        }
        else if(tmpchr == *tmp){
            cnt++;
        }
        else if(tmpchr != *tmp){
            if(cnt > 1){
                *(flow++) = cnt + '0';
                *(flow++) = tmpchr;
                cnt = 1;
                tmpchr = *(tmp++);
                continue;
            }
            else{
                *(flow++) = tmpchr;
                tmpchr = *(tmp++);
                continue;
            }
        }
        tmp++;
    }

    if(cnt > 1){
        *(flow++) = cnt + '0';
        *(flow++) = tmpchr;
    }
    else{
        *flow = tmpchr;
    }

    *flow = '\0';
}

int main(){
    char str[] = "zzzzzzzzaaabbcdddeee";
    char comp[BUFSIZ];
    strcompress(str, comp);
    printf("Compress: %s\n", comp);
}
