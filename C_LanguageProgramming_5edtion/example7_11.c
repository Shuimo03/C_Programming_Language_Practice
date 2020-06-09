#include<stdio.h>

double avg(double arr[],int len){
    double sum = 0;
    double srcore = 0;
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    srcore = sum / len;
    return srcore;
}
int main(){
    double arr1[5] = {98.5, 97.0, 91.5, 60.0, 55.0};
    double arr2[10] = {67.5, 89.5, 99.0, 69.5,77.0, 89.5, 76.5, 54.0, 60.0, 99.5};
    printf("arr1 = %.2lf\n", avg(arr1, 5));
    printf("arr1 = %.2lf\n", avg(arr2, 10));
    return 0;
}