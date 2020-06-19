#include<stdio.h>

int main(){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j <= 2 - i; j++){
            printf(" ");
        }
        for (int k = 0; k <= 2 * i;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i <= 2;i++){
        for (int j = 0; j <= i; j++){
            printf(" ");
        }
        for (int k = 0; k <= 4 - 2 * i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}