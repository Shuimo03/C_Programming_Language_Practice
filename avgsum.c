#include<stdio.h>

int main(){

    int sum = 0;
    int cnt = 0;
    int input = 0;
    scanf("%d", &input);
    while(input != -1){
        sum += input;
        cnt++;
        scanf("%d", &input);
    }
    printf("%f\n",1.0*sum/cnt);
    return 0;
}