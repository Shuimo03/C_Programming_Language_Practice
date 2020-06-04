#include<stdio.h>

int max(int a[], int len){

    int maxid = 0; 
    for (int i = 0; i < len;i++){
        if(a[i] > a[maxid]){
            maxid = i;
        }
    }
    return maxid;
}

int main(){

    int arr[] = {1, 2, 3, 6, 7, 231, 30};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = len - 1; i > 0; i--){
        int maxid = max(arr, i+1);
        int t = arr[maxid];
        arr[maxid] = arr[i];
        arr[i] = t;
    }

    for (int i = 0; i < len;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}