#include<stdio.h>

void sort(int arr[], int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void insert(int arr[],int n,int x){
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = length - 1; i >= n; i--){
        arr[i + 1] = arr[i];
    }
    arr[n] = x;
    ++arr[length];
}

int main()
{
    int arr[100] = {1, 2, 3};
    insert(arr, 3, 5);
    for (int i = 0; i < 3; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}