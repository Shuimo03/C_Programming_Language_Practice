#include<stdio.h>

int main(){

    double a, b, max;
    scanf("%lf %lf", &a, &b);
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    printf("%5.2f\n", max);
    return 0;
}