#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;
    if(a > b && a > c){
        max = a;
    }
    else if(b > c && b > c){
        max = b;
    }
    else{
        max = c;
    }
    printf("%d\n", max);
    return 0;
}