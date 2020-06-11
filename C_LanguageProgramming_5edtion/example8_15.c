#include <stdio.h>

void search(float (*p)[4], int n){
    for (int i = 0; i < n; i++){
        int flag = 0;
        for (int j = 0; j < 4; j++){
            if(*(*(p+j)+i) < 60){
                flag = 1;
            }
            if(flag == 1){
                printf("NO. %d fails, his scores are: \n",j + 1);
                for (int i = 0; i < 4; i++){
                    printf("%5.lf", *(*(p + j) + i));
                }
                printf("\n");
            }
        }
    }
}

int main(){

    float score[3][4] = {{65, 57, 70, 60}, {58, 97, 90, 81}, {80, 88, 100, 98}};
    search(score, 4);
    return 0;
}