#include <stdio.h>

int main(){

    int arr[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int *p = arr;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if((p-arr[0]) % 4 ==0) printf("\n");
            printf("%4d ", *++p);
        }
    }
    return 0;
}