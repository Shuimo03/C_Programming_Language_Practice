#include<stdio.h>

int maxC(int arr[][3], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][j] > arr[max][max]){
            max = arr[i][j];
            }
        }
    }
    return arr[max][max];
}

int main(){

}