#include<stdio.h>

int BinarySearch(int arr[],int x,int length){
    int l = 0;
    int r = length-1;
    while(l <= r){
        int mid = l+(r - l) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {45, 67, 32, 14, 43, 13, 48, 65, 89, 34, 31, 55, 19, 61, 59};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x = BinarySearch(arr, 14,length);
    if(x > 0){
        printf("被查询的数 %d = arr[%d]\n", arr[x], x);
    }
    else{
        printf("没有这个数\n");
    }
    return 0;
}