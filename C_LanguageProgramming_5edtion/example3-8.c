#include <stdio.h>

int main(){
    char c1, c2;
    c1 = getchar();
    c2 = c1 + 32;
    putchar(c2);
    putchar('\n');
    return 0;
}

/**
 *     if(c1 >= 'A' && c1 <= 'Z'){
        c2 = c1 + 32;
        printf("%c", c2);
    }
    */