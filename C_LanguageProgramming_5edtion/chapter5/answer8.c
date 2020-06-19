#include<stdio.h>
#include<math.h>
int main(){
 
    for (int i = 100; i < 1000; i++){
        int a = i / 100; //百位
        int b = i / 10 % 10; //十位
        int c = i % 10; // 个位
        int res = pow(a, 3) + pow(b, 3) + pow(c, 3);
        if(i == res){
             printf("%d是水仙花数\n", res);
        }
    }
    return 0;
}