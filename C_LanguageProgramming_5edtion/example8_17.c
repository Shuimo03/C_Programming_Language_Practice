#include <stdio.h>

int main(){

    char string[] = "I love China!";
    char *str = string;
    printf("%s \n", str);
    printf("%c \n", *(str));
    return 0;
}