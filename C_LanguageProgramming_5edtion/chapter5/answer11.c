#include<stdio.h>

int main(){

    
    double meter = 100.0;
    double half_mater = meter/2;
    for (int i = 2; i <= 10; i++){
        meter = meter+2*half_mater;
        half_mater /= 2;
    }
    printf("总共跳了%lf米\n", meter);
    printf("最后一次 %lf米\n", half_mater);
    return 0;
}