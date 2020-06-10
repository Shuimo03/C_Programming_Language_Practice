#include<stdio.h>

int *max(int *a, int *b){
    int *c;
    if(a > b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}

int main(){

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int *PA;
    int *PB;
    PA = &a;
    PB = &b;
    int *res = max(PA, PB);
    int *min;
    if(PA < res){
        min = PA;
    }
    else if(PB < res){
        min = PB;
    }
    printf("max = %d\n", *res);
    printf("min = %d\n", *min);
    return 0;
}