#include<stdio.h>

int main(){

    int arr[3][4] = {{1, 2, 3, 4}, {9, 8, 7, 6}, {-10, 10, -5, 2}};
    int max = arr[0][0];
    int row = 0;
    int col = 0;
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 3;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("row = %d\n", row);
    printf("col = %d\n", col);
    printf("sum = %d\n", max);
    return 0;
}