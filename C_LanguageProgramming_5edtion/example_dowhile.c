#include<stdio.h>
int main(){

    int i = 1;
    int sum = 0;
    do
    {
        printf("%d\n", i++);
        sum++;
    } while (i <= 100);
    printf("loop of num:%d\n", sum);
    return 0;
}