#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int res = (a > b) ? 1:0;
    //相当下面这个if语句
    if(a > b){
        res = 1;
    }
    else{
        res = 0;
    }
    printf("%d\n", res);
    return 0;
}

