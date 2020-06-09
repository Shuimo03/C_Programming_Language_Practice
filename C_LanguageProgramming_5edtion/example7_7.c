#include<Stdio.h>

int fac(int n){
    if(n == 0 || n == 1) return 1;
    int f = fac(n - 1) * n;
    return f;
}

int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", fac(n));
    return 0;
}