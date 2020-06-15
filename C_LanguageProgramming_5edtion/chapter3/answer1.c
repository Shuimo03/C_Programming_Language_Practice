#include<stdio.h>
#include<math.h>

int main(){

    double p, r;
    int n = 10;
    r = 0.07;
    p = pow((1 + r), n);
    printf("%lf\n", p);
    printf("%.2lf\n", p);
    return 0;
}