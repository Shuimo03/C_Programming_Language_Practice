#include<stdio.h>

int main(){

    int arr[10];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        arr[i] = i;
    }
    for (int i = len-1; i > 0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;
}