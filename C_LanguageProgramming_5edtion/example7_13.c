#include <stdio.h>

int max(int arr[][4]){

    int max = arr[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    int arr[3][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}, {15, 17, 34, 12}};
    printf("%d\n", max(arr));
    return 0;
}