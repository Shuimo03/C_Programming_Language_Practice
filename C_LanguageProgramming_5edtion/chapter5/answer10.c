#include<stdio.h>

int main(){

    int n = 20;
    double a = 2, b = 1, s = 0;
    for(int i = 1; i <= n;i++){
        s = s + a / b;
        double temp = a;
        a = a+b;
        b = temp;
    }
    printf("sum = %16.10f\n", s);
    return 0;
}