#include<stdio.h>
#include<math.h>

int main(){

    int dwTriVal;
    for (int i = 0; i < 10; i++){
        dwTriVal = 1;
        for (int j = 0; j <= i; j++){
            printf("%5d", dwTriVal);
            dwTriVal = dwTriVal * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}