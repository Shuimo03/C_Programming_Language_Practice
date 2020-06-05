#include<stdio.h>
int prime(int n);


int prime(int n){
    int isPrime = 1;
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main(){

    int n;
    scanf("%d", &n);
    if(n >= 3 && prime(n)){
        printf("%d是素数\n", n);
    }
}