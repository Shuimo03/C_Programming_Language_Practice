#include<stdio.h>

int main(){

    double fac = 1;
    double sum = 0;
    for (int i = 1; i <= 20; i++){
        fac *= i;
        sum += fac;
    }
    printf("%lf\n", sum);
    return 0;
}