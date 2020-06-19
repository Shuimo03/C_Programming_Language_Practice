#include<stdio.h>

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = arr[0][0] + arr[1][1] + arr[2][2];
    printf("sum = %d \n", sum);
    return 0;
}