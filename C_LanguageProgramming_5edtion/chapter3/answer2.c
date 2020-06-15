#include <stdio.h>
#include <math.h>
int main(){

    double p = 1000;
    double r1 = p * (1 + 0.03 * 5);//一次5年
    double r2 = p * (1 + 2 * 0.021) * (1 + 3 * 0.0275);//先存2年，到期后将本息再存3年
    double r3 = p * (1 + 3 * 0.0275) * (1 + 2 * 0.021);//先存3年，到期后将本息再存2年
    double r4 = p * pow(1 + 0.015, 5); //存1年期，到期后再将本息再存1年，连续5年
    double r5 = p * pow(1 + 0.0035 / 4, 4 * 5); //存活期款，活期利息每一季度结算一次

    printf("r1 = %lf\n", r1);
    printf("r2 = %lf\n", r2);
    printf("r3 = %lf\n", r3);
    printf("r4 = %lf\n", r4);
    printf("r5 = %lf\n", r5);
    return 0;
}