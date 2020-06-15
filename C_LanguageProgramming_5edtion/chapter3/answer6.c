#include<stdio.h>
#include<math.h>
int main(){

    double pi = 0.0;
    scanf("%lf", &pi);
    int h = 3;
    double r = 1.5;
    printf("圆的周长 = %.2lf\n", pi * 2*r);
    printf("圆的面积 = %.2lf\n", pi * pow(r, 2));
    printf("圆球的表面积 = %.2lf\n", pi * 4 * pow(r, 2));
    printf("圆球体积 = %.2lf\n",(3.0/4.0)*pi*pow(r,3));
    printf("圆柱体积 = %.2lf\n", pi * pow(r, 2) * h);
    return 0;
}