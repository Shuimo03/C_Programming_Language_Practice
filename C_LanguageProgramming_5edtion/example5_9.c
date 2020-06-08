#include<stdio.h>

int main(){

    int n = 0;
    scanf("%d", &n);
    int isPrime = 1;
    for (int i = 2; i < n;i++){
        if(n % 2 == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        printf("%d是素数\n", n);
    }
    else{
        printf("%d不是素数\n", n);
    }
    return 0;
}