#include<stdio.h>

void printArr(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printPointArr(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++){
        printf("%d ", *(arr + i));
    }
}

int main(){
    printArr();
    printPointArr();
    return 0;
}