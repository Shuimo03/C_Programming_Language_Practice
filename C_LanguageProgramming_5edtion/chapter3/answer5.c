#include<stdio.h>

int main(){

    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';
    putchar(c1 += 4);
    putchar(c2 += 4);
    putchar(c3 += 4);
    putchar(c4 += 4);
    putchar(c5 += 4);
    printf("\n");0
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
    return 0;
}