#include<stdio.h>
int main(){

    int a = 5;
    int b = 6;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;
}