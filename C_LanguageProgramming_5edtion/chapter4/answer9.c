#include<stdio.h>

int main(){

    int n = 0;
    int sum = 0;
    int cnt = 0;
    scanf("%d", &n);
    int res = n;
    while(n > 0 && n < 99999){
        sum += n % 10;
        n /= 10;
        cnt++;
        printf("%d,",n%10);
    }
    printf("\n");
    printf("%d是%d位数\n",res,cnt);
    return 0;
}


/**
 *     int n = 0;
    int sum = 0;
    int cnt = 0;
    scanf("%d", &n);
    int res = n;
    while(n > 0 && n < 99999){
        sum += n % 10;
        n /= 10;
        printf("%d ",n);
        cnt++;
    }
    printf("\n");
    printf("%d是%d位数\n",res,cnt);
    return 0;
    **/