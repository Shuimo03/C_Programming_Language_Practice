#include <stdio.h>

int search(int key, int len,int arr[]);

int main(){

    int arr[] = {1, 2, 3, 6, 7, 231, 30};
    int res = search(50, sizeof(arr) / sizeof(arr[0]),arr);
    printf("%d\n", res);

    return 0;
}

int search(int key, int len,int arr[]){

    int l = 0;
    int r = len-1;
    int res = 0;
    while(l < r){
        int mid = (l + r) / 2;
        if(arr[mid] == key){
            res = key;
            break;
        }
        else if(arr[mid] > key){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}