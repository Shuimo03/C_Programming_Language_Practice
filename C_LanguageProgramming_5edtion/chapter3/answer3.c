#include<stdio.h>
#include<math.h>

int main(){

    int d = 300000; //贷款
    int p = 6000; //还款
    double r = 0.01; //利息
    double m = log(p / (p - d * r)) / log(1 + r);
    printf("%.1lf\n", m);
    return 0;
}