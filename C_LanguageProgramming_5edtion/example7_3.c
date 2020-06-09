#include <stdio.h>

int max(float a, float b){
    float c;
    if(a > b){
        c = a;
    }
    else if(b > a){
        c = b;
    }
    return c;
}

int main(){

    float a, b = 0;
    scanf("%f %f", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}