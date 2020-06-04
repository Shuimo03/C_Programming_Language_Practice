#include<stdio.h>
char LowCase(char a); //小写字母转大写
char Capital(char a); //大写字母转小写

char LowCase(char a){
    return a - 32;
}

char Capital(char a){
    return a+32;
}

int main(){

    char a;
    scanf("%c", &a);
    printf("大写字母:""%c\n",LowCase(a));
    printf("小写字母:""%c\n",Capital(a));
    return 0;
}