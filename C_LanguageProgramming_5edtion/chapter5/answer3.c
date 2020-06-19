#include<stdio.h>

//最大公约数
int gcd(int n,int m){
    return m == 0 ? n:gcd(m,n%m);
}

//最小公倍数
int lcm(int n,int m){
    return n / gcd(n, m) * m;
}

int main(){
    int n, m = 0;
    printf("请输入n和m:");
    scanf("%d %d", &n, &m);
    int max = gcd(n, m);
    int min = lcm(n, m);
    printf("最大公约数是:%d\n", max);
    printf("最小公倍数是:%d\n", min);
    return 0;
}