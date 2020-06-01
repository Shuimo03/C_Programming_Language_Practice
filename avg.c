#include<stdio.h>
int main(){

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%.2f\n", c);
    return 0;
}