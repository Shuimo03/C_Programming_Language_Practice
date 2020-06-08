#include<stdio.h>

void TwoHundred(){
    for (int num = 100; num <= 200; num++){
        if(num %3 == 0){
            continue;
        }
        printf("%d ", num);
    }
    printf("\n");
}

int main(){

    // for (int i = 100; i <= 200; i++){
    //     if(i % 3 != 0){
    //         printf("%d\n", i);
    //     }
    // }
    TwoHundred();
    return 0;
}