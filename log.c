#include <stdio.h>

int main(){

    int x;
    int ret = 0;
    scanf("%d", &x);
    int t = x; //计算之前先保存原始数据
    while( x > 1){
        x /= 2;
        ret++;
    }
    printf("%d\n", ret);
    return 0;
}