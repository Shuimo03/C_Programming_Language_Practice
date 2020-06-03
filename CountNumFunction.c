#include<stdio.h>

int count(int n){
    int res = 0;
    for (int i = 1; i <= n; i++){
        res += i;
    }
    return res;
}

int main(){

    int n = 0;
    scanf("%d", &n);
    printf("%d\n", count(n));
    return 0;
}