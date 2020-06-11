#include<stdio.h>
int main(){

    char a[] = "I am a boy";
    char b[20];
    char *p1 = a;
    char *p2 = b;
    for (; *p1 != '\0'; p1++,p2++){
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("a  = %s \n", a);
    printf("b =  %s \n", b);
    return 0;
}