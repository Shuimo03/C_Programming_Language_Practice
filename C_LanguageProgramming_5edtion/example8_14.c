#include <stdio.h>

double avg(double *arr, int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += *arr++;
    }
    sum /= n;
    return sum;
}

int search(double arr[], int n, int len){
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if(arr[i] == arr[n]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    double arr[3];
    double *p = arr;
    for (int i = 0; i < 3; i++){
        scanf("%lf",&arr[i]);
    }
    printf("sum  = %.2lf \n", avg(p, 3));
    printf("%d\n", search(p, 2, 3));
    return 0;
}