#include<stdio.h>
int main(){
    const int AMOUNT = 100; // const被赋值之后，不能在修改了，也不能放在赋值号左边。
    int price = 0;
    printf("请输入金额(元)：");
    scanf("%d", &price);
    int change = AMOUNT - price;
    printf("找您%d元。\n", change);
    return 0;
}