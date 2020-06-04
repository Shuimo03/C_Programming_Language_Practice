#include<stdio.h>

int main(){

    printf("sizeof(double) = %ld\n", sizeof(double));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(long) = %ld\n", sizeof(long));

    int a = 0;
    int p = (int)&a;
    p = (int)&a;
    printf("0x%x\n", &a);
    printf("0x%p\n", &a);
    printf("%p\n", &a);
    return 0;
}