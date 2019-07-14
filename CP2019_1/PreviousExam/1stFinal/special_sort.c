#include <stdio.h>

void special_sort(int ary[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(ary[j] < 0 && ary[j+1] < 0){
                if(ary[j] < ary[j+1]){
                    int tmp = ary[j];
                    ary[j] = ary[j+1];
                    ary[j+1] = tmp;
                }
            }
            else if(ary[j] > ary[j+1]){
                int tmp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = tmp;
            }
        }
    }
}

int main(){
    int ary[] = {-1, 1, 3, -2, 2, -3};
    int n = sizeof(ary)/sizeof(ary[0]);
    special_sort(ary, n);
    printf("special order: ");
    for(int i=0; i<n; i++){
        printf("%d ", ary[i]);
    }
    printf("\n");
}
