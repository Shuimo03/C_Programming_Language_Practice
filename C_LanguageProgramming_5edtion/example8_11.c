#include<stdio.h>

int main(){

    int arr[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    printf("%d %d\n",arr,*arr);
    printf("%d %d\n",arr[0],*(arr+0));
    printf("%d %d\n",&arr[0],&arr[0][0]);
    printf("%d %d\n",arr[1],arr+1);
    printf("%d %d\n",&arr[1][0],*((*arr+1)+0));
    return 0;
}