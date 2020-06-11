#include <stdio.h>

void cpy_string(char *s1,char *s2){
    int i = 0;
    while(s1[i] != '\0'){
        *(s2+i) = *(s1+i);
        i++;
    }
    *(s2 + i) = '\0';
}

int main(){

    char s1[] = "I am tearcher";
    char s2[] = "Your are tearcher";
    char *p1 = s1;
    char *p2 = s2;
    cpy_string(p1, p2);
    printf("s2 = %s\n", p2);
    return 0;
}