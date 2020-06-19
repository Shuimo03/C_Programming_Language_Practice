#include<stdio.h>

void sort(int arr[],int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[4];
    for (int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, 4);
    for (int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}