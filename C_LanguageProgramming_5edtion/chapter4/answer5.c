#include<stdio.h>
#include<math.h>

void Usqrt(int input){
    double res = sqrt(input);
    int ep = (int)res;
    int k = res - ep;
    if(k){
        printf("%lf\n", res);
    }
}

int main(){

    int input = 0;
    scanf("%d",&input);
    if(input < 1000){
        Usqrt(input);
    }
    else{
        printf("重新输入input\n");
    }
    return 0;
}