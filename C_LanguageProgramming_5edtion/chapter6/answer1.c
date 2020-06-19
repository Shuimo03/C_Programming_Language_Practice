#include<stdio.h>

int prime[101]; //存放素数
int visit[101]; // true表示被筛掉不是素数

int E_sieve(int n){
    for (int i = 0; i < n; i++){
        visit[i] = 0;
    }
    for (int i = 2; i * i <= n; i++){
        if(!visit[i]){
            for (int j = i * i; j <= n; j+=i){
                visit[j] = 1;
            }
        }
    }

    int k = 0; //统计素数个数，看情况选择
    for (int i = 2; i <= n;i++){
        if(!visit[i]){
            prime[k++] = i;
        }
    }
    return k;
}

int main(){

    int ans =  E_sieve(100);
    for (int i = 0; i < ans; i++){
        printf("%d ",prime[i]);
    }
    return 0;
}
