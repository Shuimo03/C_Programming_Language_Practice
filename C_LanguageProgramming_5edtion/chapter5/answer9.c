#include<stdio.h>

int main(){
    int sum = 0;
    for (int i = 2; i < 1000; i++){
        for (int j = 1; j < i; j++){
            if((i%j) == 0){
                sum++;
            }
            if(sum == i){
                printf("%d, its factors are ", i);
                for (j = 1; j < i; j++){
                    if(i %j == 0){
                        printf("%d", j);
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}