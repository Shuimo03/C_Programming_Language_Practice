#include<stdio.h>

double avg(double arr[]){

    double sum = 0;
    double score = 0;
    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }
    score = sum / 10;
    return score;
}
int main(){

    double arr[10];
    for (int i = 0; i < 10; i++){
        scanf("%lf", &arr[i]);
    }
    printf("%.2lf\n", avg(arr));
    return 0;
}