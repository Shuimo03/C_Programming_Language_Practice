#include<stdio.h>

int main(){

    int A = 5;
    int B = 6;
    int C = 0;
    C = A;
    A = B;
    B = C;
    printf("A %d B %d\n", A, B);
    return 0;
}