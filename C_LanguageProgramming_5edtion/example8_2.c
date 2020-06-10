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
    int *PA = &a;
    int *PB = &b;
    int *res = max(PA, PB);
    printf("%d\n", *res);
    printf("%p\n", res);
    int *max = (int *)0x000000000061FE0C;
    printf("res address = 000000000061FE0C  = %d\n", *max);
    return 0;
}

//000000000061FE0C