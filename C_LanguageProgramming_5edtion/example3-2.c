#include<stdio.h>

int main(){

    float p0,r1,r2,r3;
    scanf("%f %f %f %f",&p0,&r1,&r2,&r3);
    double p1 = p0*(1+r1);
    double p2 = p0*(1+r2);
    double p3 = p0*(1+r3/2)*(1+r3/2);
    printf("p1 = %f p2 = %f p3 = %f\n",p1,p2,p3);
    return 0;
}