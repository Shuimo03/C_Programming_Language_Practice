#include<stdio.h>

int sum(int *arr){
    int num = 0;
    for (int i = 0; i < *arr; i++){
        sum += arr(i)
    return sum;
}

int main(){
    int *arr = {1, 2, 3, 4};
    printf("%d\n", sum(arr));
    return 0;
}