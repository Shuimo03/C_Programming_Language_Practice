#include<stdio.h>

const int max = 40;


int fib(int n){
    int arr[max];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 39;i++){
        arr[i] = arr[i - 1] + arr[i-2];
    }
    return arr[n];
}

int main(){
    for (int i = 1; i <= 39; i++){
        printf("fib(%d) = %d\n",i,fib(i));
    }
    return 0;
}