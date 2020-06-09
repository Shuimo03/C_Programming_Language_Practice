#include<stdio.h>

int max(int a, int b){
    int c = 0;
    if(a > b){
        c = a;
    }
    else if(b > a){
        c = b;
    }
    return c;
}

int main(){

    int a, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}