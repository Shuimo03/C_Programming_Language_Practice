#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2, p, q;
    scanf("%lf %lf %lf", &a, &b, &c);
    double disc = pow(b, 2) - 4 * a * c;
    if(disc < 0){
        printf("此方程无实根\n");
    }
    else{
        p = -b / (2.0 * a);
        q = sqrt(disc) / (2.0 * a);
        x1 = p + q;
        x2 = p - q;
        printf("x1 = %7.2f\n",x1);
        printf("x2 = %7.2f\n", x2);
    }
    return 0;
}