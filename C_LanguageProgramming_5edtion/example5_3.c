#include<stdio.h>

int whilesum(int i){
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    return sum;
}

int dowhilesum(int i){
    int sum = 0;
    do{
        sum += i;
        i++;
    } while (i <= 10);
    return sum;
}

int main(){

    int i =  0;
    printf("please enter i,i = ?");
    scanf("%d", &i);
    printf("whilesum sum %d \n", whilesum(i));
    printf("dowhilesum sum %d \n", dowhilesum(i));
    return 0;
}