#include<stdio.h>
void swap();

int main(){

    int a = 5;
    int b = 6;
    swap(a, b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap(double a, double b){
    int temp = a;
    a = b;
    printf("a = %f , b = %f", a, b);
    b = temp;
} 