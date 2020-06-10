#include<stdio.h>

int f(int a){
    auto int b = 0; //自动变量
    static int c = 3; //静态变量
    b += 1;
    c += 1;
    return a + b + c;
}

int main(){
    int a = 2;
    for (int i = 0; i < 3; i++){
        printf("%d\n", f(a));
    }
    return 0;
}