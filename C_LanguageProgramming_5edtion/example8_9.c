#include <stdio.h>

void print(int arr[],int n){
    for (int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return;
}

int main(){

    int arr[] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    int *p = arr;
    print(p, 10);
    return 0;
}