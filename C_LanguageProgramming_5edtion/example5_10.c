#include<stdio.h>

    int isPrime(int n){
        int prime = 1;
        for (int i = 2; i < n; i++){
            if(n % 2 == 0){
                prime = 0;
                break;
            }
        }
        return prime;
    }

    int main(){
        for (int i = 100; i <= 200;i++){
            if(isPrime(i) ==1){
                printf("%d ", i);
            }
            if(i % 10 == 0) printf("\n");
        }
        return 0;
    }
