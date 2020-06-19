#include<stdio.h>

void selectsort(int arr[],int n){
    int min = 0;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i + 1; j < n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){

    int arr[] = {5, 6, 7, 43, 13, 43, 566, 436, 98, 193};
    selectsort(arr, 10);
    for (int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}