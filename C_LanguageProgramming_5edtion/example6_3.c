#include<stdio.h>

void sort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, len);
    for (int i = 0; i < len;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}