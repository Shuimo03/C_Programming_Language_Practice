#include<stdio.h>

double avg(double score[],int students){
    double sum = 0;
    double res = 0;
    for (int i = 0; i < students;i++){
        sum += score[i];
    }
    res = sum / students;
    return res;
}

int main(){

    double arr[10];
    for (int i = 0; i < 10; i++){
        scanf("%lf", &arr[i]);
    }

    double max = arr[0];
    double min = arr[0];
    for (int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

        printf("avg = %.2lf\n", avg(arr, 10));
        printf("max = %.2lf\n", max);
        printf("min = %.2lf\n", min);
        return 0;
}