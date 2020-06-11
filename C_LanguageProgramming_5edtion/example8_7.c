#include<stdio.h>

int main(){

    int *p;
    int arr[10];
    p = arr;
    for (int i = 0; i < 10;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++, p++){
        printf("%d = address % p \n ", *p,p);
    }
        return 0;
}