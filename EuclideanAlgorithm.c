/**
 * 最大公约数算法(辗转相除法) 
 */
#include<stdio.h>
int main(){

    int u = 32;
    int v = 26;
    while(v!= 0){
        int temp = u % v;
        u = v;
        v = temp;
    }
    printf("%d", u);
    return 0;
}