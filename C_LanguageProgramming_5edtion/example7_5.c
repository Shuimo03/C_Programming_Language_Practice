#include<stdio.h>

int max(int arr[]){
    int max = arr[0];
    for (int i = 1; i < 4;i++){

        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main(){
    int arr[4];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int  i = 0; i < len;i++){
        scanf("%d", &arr[i]);
    }
     printf("%d\n",max(arr));
    return 0;
}