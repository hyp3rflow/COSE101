#include <stdio.h>

int compare_version(char* left, char* right){
    char *lp, *rp;
    lp = left;
    rp = right;

    int ltmp, rtmp;
    
    while(*lp || *rp){
        ltmp = 0;
        for(; *lp != '.' && *lp; lp++){
            ltmp *= 10;
            ltmp += *lp;
        }
        if(*lp == '.'){
            lp++;
        }

        rtmp = 0;
        for(; *rp != '.' && *rp; rp++){
            rtmp *= 10;
            rtmp += *rp;
        }
        if(*rp == '.'){
            rp++;
        }

        if(ltmp > rtmp){
            return 1;
        }
        else if(ltmp < rtmp){
            return -1;
        }
    }
    
    if(*lp){
        return 1;
    }
    else if(*rp){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    char m[10];
    char n[10];
    while(1){
        scanf("%s %s", m, n);
        printf("%d\n", compare_version(m, n));
    }

    return 0;
}
