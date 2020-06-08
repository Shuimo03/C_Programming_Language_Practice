#include<stdio.h>
int main(){

    char str[] = {'I', ' ', 'a', 'm', ' ', 'a', ' ', 's', 't', 'u', 'd', 'e', 'n', 't', '.'};
    int len = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < len; i++){
        printf("%c", str[i]);
    }
    return 0;
}