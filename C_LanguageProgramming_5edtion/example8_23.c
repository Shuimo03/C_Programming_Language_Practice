#include <stdio.h>

int min(int a, int b){
    int c = 0;
    if(a < b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}

int max(int a,int b){
    int c = 0;
    if(a > b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int (*maxp)(int, int);
    int (*minp)(int, int);
    maxp = max;
    minp = min;
    if(c == 1){
        printf("%d\n", maxp(a, b));
    }
    else if(c == 2){
        printf("%d\n", minp(a, b));
    }
    return 0;
}