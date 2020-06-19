#include<stdio.h>
#include<math.h>

int main(){

    double n, y = 1.0;
    printf("请输入一个需求其平方根的数:");
    scanf("%lf", &n);
    while(fabs((1.0/2.0*(y+n/y))-y) >= 0.00001){
        y = 1.0 / 2.0 * (y + n / y);
        printf("y = %lf\n", y);
    }
    printf("平方根:%f\n", y);
    return 0;
}