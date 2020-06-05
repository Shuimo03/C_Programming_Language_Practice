#include<stdio.h>

int max(int arr[], int n);

int max(int arr[],int len){
    int max = 0;
    for(int i = 0; i < len+1; i++){
            if(arr[0] > arr[i]){
                max = i;
            }
        else if(max <= arr[i]){
                max = i;
        }
    }
    return max;
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        arr[i] = scanf("%d", &i);
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", max(arr,len));
    return 0;
}

