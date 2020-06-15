#include<stdio.h>

int main(){

    int a = 0, b = 0, c = 0;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        max = a;
    }
    else if(b > a && b > c){
        max = b;
    }
    else{
        max = c;
    }
    printf("%d\n", max);
    return 0;
}