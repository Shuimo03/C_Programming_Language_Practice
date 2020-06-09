#include<stdio.h>

int age(int n){
    if(n == 1) return 10;
    return age(n - 1) + 2;
}

int main(){
    int n = 5;
    printf("%d\n", age(n));
    return 0;
}