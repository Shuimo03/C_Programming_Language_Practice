#include<stdio.h>

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

    int a = 5;
    int b = 9;
    int(*p)(int,int);
    p = max;
    printf("%d\n", (*p)(a, b));
    return 0;
}