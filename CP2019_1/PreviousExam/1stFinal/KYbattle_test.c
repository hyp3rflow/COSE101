#include <stdio.h>

int main(){
    int cnt, win, lose, resultwin = 0, resultlose = 0;
    FILE *fp = fopen("result.txt", "r");
    fscanf(fp, "%d %d %*d %d", &cnt, &win, &lose);
    while(cnt != -1){
        if(win>lose){
            resultwin++;
        }
        else{
            resultlose++;
        }
        fscanf(fp, "%d %d %*d %d", &cnt, &win, &lose);
    }

    printf("Total win: %d\n", resultwin);
    printf("Total draw: 0\n");
    printf("Total loss: %d\n", resultlose);
}
