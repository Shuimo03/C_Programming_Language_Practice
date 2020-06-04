#include <stdio.h>

int search(int key, int a[], int len){

    int ret = -1;
    for (int i = 0; i < len; i++){
        if(key == a[i]){
            ret = i;
            break;
        }
    }
    return ret;
}

int main(){

    int arr[] = {1, 2, 3, 6, 7, 231, 30};
    int res = search(231, arr,sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", res);

    return 0;
}