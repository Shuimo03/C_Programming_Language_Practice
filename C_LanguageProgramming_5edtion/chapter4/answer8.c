#include<stdio.h>

int main(){

    int score = 0;
    scanf("%d", &score);
    int res = score / 10;
    switch(res){
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            printf("E\n");
            break;
    }
    return 0;
}