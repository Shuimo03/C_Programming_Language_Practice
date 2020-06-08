
#include<stdio.h>

int main(){

    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[3][2];
    for (int i = 0; i <= 1;i++){
        for (int j = 0; j <= 2; j++){
            printf("%5d", arr1[i][j]);
            arr2[j][i] = arr1[i][j];
        }
        printf("\n");
    }
    printf("arr b: \n");
    for (int i = 0; i <= 2;i++){
        for (int j; j <= 1;j++){
            printf("%5d", arr2[i][j]);
        }
        printf("\n");
    }
        return 0;
}