#include<stdio.h>
#include "User_math.h"

int main(){

    double a, b = 0;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", add(a, b));
    return 0;
}