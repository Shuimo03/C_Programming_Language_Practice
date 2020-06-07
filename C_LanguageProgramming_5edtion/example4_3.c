#include<stdio.h>

int main(){

    double a, b, c, max;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a > b){
        max = a;
    }
    else if(b > c){
        max = b;
    }
    else{
        max = c;
    }
    printf("%5.2f\n", max);
    return 0;
}