#include <stdio.h>

int main(){
    FILE *fp = fopen("result.txt", "r");

    char tmp[100] = {0};
    int win = 0, draw = 0, lose = 0;
    
    fgets(tmp, 100, fp);
    while(tmp[0] != '-' && tmp[1] != '1' && tmp[2] != 0){
        int cnt;

        char *ptr = tmp;
        while(*ptr != ' '){
            ptr++;
        }
        ptr++;
        cnt = *ptr - '0';
        ptr += 4;
        if(cnt > *ptr - '0'){
            win++;
        }
        else{
            lose++;
        }

        fgets(tmp, 100, fp);
    }

    fclose(fp);

    printf("Total win: %d\n", win);
    printf("Total draw: %d\n", draw);
    printf("Total loss: %d\n", lose);

    return 0;
}
