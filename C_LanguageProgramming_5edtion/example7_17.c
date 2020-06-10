#include<stdio.h>

int fac(int n){
    static int res = 1;
    res *= n;
    return res;
}

int main(){

    // int n = 0;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++){
    //     printf("%d = %d\n", i, fac(i));
    // }
    static int x;
    int z =5;
    int *p = (int *)0X000000000061FE1C;
    printf("%p\n", &x);
    printf("%p\n", &z);
    printf("%d\n", *p);
    return 0;
}