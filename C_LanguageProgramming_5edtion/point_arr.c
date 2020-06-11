#include<stdio.h>

int main(){

    // int arr[10] = {1,2,2,34,4};
    // int len = sizeof(arr) / sizeof(arr[0]);
    // int *Parr = arr;
    // printf(" len = %d\n", len);
    // printf("arr = %p\n", Parr);
    // for (int i = 0; i < len;i++){
    //     printf("arr[%d]  = %p\n", i, &arr[i]);
    // }

    // int end = 0x000000000061FE04;
    // int front = 0x000000000061FDE0;
    // int first = *arr;
    // printf("%d\n", end);
    // printf("%d\n", front);
    // printf("%d\n", end - front);
    // printf("%d\n", first);

    int arr[] = {1, 2, 3, 4};
    int *a = (arr + 0); // arr[0]
    return 0;
}

//数组:000000000061FDF0
//数组元素:000000000061FDF0



/**
 arr[0]  = 6421984
arr[1]  = 6421988
arr[2]  = 6421992
arr[3]  = 6421996
arr[4]  = 6422000
arr[5]  = 6422004
arr[6]  = 6422008
arr[7]  = 6422012
arr[8]  = 6422016
arr[9]  = 6422020
*/


/**
arr = 000000000061FDE0
arr[0]  = 000000000061FDE0
arr[1]  = 000000000061FDE4
arr[2]  = 000000000061FDE8
arr[3]  = 000000000061FDEC
arr[4]  = 000000000061FDF0
arr[5]  = 000000000061FDF4
arr[6]  = 000000000061FDF8
arr[7]  = 000000000061FDFC
arr[8]  = 000000000061FE00
arr[9]  = 000000000061FE04
*/