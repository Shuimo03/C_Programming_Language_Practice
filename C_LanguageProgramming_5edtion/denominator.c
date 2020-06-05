#include<stdio.h>

// 1-(1/2)+(1/3)
int main(){

    double sum = 1.0;
    double deno = 2.0;
    int sign = 1;
    double term;
    while(deno <= 100){
        sign *= -1;
        term = sign * 1 / deno;
        sum += term;
        deno += 1;
    }
    printf("%f\n", sum);
    return 0;
}