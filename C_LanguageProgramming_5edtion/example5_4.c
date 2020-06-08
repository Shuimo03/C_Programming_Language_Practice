#include<stdio.h>

const int SUM = 100000;

int main(){

    double amount, aver, total;
    int i;
    for (i = 1, total = 0; i <= 1000;i++){
        printf("please enter amount:");
        scanf("%lf", &amount);
        total += amount;
        if(total > SUM) break;
    }
    aver = total / i;
    printf("num = %d\n", i);
    printf("aver = %10.2f\n", aver);
    return 0;
}