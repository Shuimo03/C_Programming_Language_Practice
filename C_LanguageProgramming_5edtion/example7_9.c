#include<stdio.h>

int maxvalue(int arr[]){
    int max = arr[0];
    for (int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[10];
    for (int i = 0; i < 9;i++){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    for (int i = 0; i < 9; i++){
        if(arr[i] == maxvalue(arr)){
            cnt = i;
        }
    }
     printf("maxarr[%d] = %d",cnt,maxvalue(arr));
    return 0;
}