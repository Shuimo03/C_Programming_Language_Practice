#include<stdio.h>
int main(){

    char c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    printf("\n c1 = %c c2 = %c\n", c1, c2);
    printf("c1 ASCII code = %d c2 ASCII code = %d\n", c1, c2);
    return 0;
}