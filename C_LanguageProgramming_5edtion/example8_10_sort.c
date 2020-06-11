#include <stdio.h>

void sort(int *arr, int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i;j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    int *p = arr;
    sort(p, 10);
    for (int i = 0; i < 10; i++){
        printf("%d ", *p++);
    }
    return 0;
}