#include<stdio.h>

int main(){

    int arr[] = {8, 6, 5, 4, 1};
    for (int i = 0; i < 5;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 4; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}