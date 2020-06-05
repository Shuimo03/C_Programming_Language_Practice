#include <stdio.h>

int max(int a, int b);

int main(){

    int a, b, c;
    scanf("%d %d", &a, &b);
    c = max(a, b);
    printf("max = %d \n", c);
    return 0;
}

int max(int a, int b){

    int c;
    if(a > b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}