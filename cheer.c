#include<stdio.h>

void cheer(int x);

void cheer(int x){
    printf("cheer %d \n", x);
}

int main(){

    cheer(5);
    return 0;
}