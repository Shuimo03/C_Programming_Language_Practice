#include<stdio.h>

int main(){

    char score;
    scanf("%c", &score);
    switch(score){
        case 'A':
            printf("85-100\n");
            break;
        case 'B':
            printf("70-84\n");
            break;
        case 'C':
            printf("60-69\n");
            break;
        case 'D':
            printf("< 60\n");
            break;
        default:
            printf("输入出错\n");
            break;
    }
    return 0;
}