#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);
    // if(ch >='A' && ch <='Z'){
    //     ch += 32;
    //     printf("%c\n", ch);
    // }
    // else if(ch >= 'a' && ch <= 'z'){
    //     ch -= 32;
    //     printf("%c\n", ch);
    // }
    ch = (ch >= 'A' && ch <= 'Z') ? ch += 32 : ch;
    printf("%c\n", ch);
    return 0;
}