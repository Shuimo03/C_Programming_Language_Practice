#include<stdio.h>

void sort(int arr[],int n){
    for (int i = 0; i < n - 1; i++){
        int k = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(arr, 10);
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}