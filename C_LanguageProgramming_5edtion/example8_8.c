#include<stdio.h>

void print(int arr[],int n){
    for (int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
}

void inv(int *x,int n){
    int *p, temp, *i, *j, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++,j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

int main()
{
    int arr[10] = {3,7,9,11,0,6,7,5,4,2};
    inv(arr, 10);
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
        return 0;
}