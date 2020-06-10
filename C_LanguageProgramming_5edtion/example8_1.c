#include<stdio.h>

int main(){
    // int a = 100;
    // int b = 10;
    // int *pointer_1;
    // int *pointer_2;
    // pointer_1 = &a;
    // pointer_2 = &b;
    // printf("a = %d b = %d\n", a, b);
    // printf("pointer_1  = %d pointer_2 = %d\n", *pointer_1, *pointer_2);
    // printf("a address  = %p  b address = %p\n", a, b);
    // printf("pointer_1 = %p  pointer_2 = %p\n", pointer_1, pointer_2);

    int a = 10;
    int *p = (int *)0x000000000061FE1C;
    printf("%p\n", &a);
    printf("%d\n", *p);
    return 0;
}