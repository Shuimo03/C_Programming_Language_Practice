#include<stdio.h>

int main(){

    int x = 0;
    scanf("%d", &x);
    if( x< 1){
        printf("%d\n", x);
    }
    else if(1 < x && x <10){
        printf("%d\n", 2*x - 1);
    }
    else if(x >= 10){
        printf("%d\n", 3 * x - 11);
    }
    return 0;
}