#include<stdio.h>
int A;
int power(int n);
int main(){
    int b = 3, c, d, m;
    scanf("%d %d %d", &A, &m);
    c = A * b;
    printf("%d * %d = %d\n", A, b, c);
    d = power(m);
    printf("%d * * %d = %d\n", A, m, d);
    return 0;
}