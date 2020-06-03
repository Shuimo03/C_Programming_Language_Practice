#include<stdio.h>

int isPrime(int i){
    int ret = 1;
    for (int k = 2; k < i - 1; i++){
        if(i % k == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}

int main(){

    int m, n;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &m, &n);
    if(m == 1) m = 2;
    for (int i = 0; i <= n; i++){
        if(isPrime(i)){
            sum += i;
            cnt++;
        }
    }
    printf("%d\n", sum);
    return 0;
}

