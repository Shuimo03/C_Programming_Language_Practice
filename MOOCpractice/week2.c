#include<stdio.h>
int main(){

    int input = 0;
    scanf("%d",&input);
    int sd = input % 10; // single digit
    int hd = input / 100; //hundreds digit
    int td = input % 100/10; // ten digit
    if(sd == 0 && td == 0){
        printf("%d\n",hd);
    }
    else{
        printf("%d%d%d\n",sd,td,hd);
    }
    return 0;
}