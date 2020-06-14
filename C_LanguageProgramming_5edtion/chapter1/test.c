#include<stdio.h>

int main(){

    char *a = "酱油";
    char *b = "醋";
    char *c = "";
    c = a;
    a = b;
    b = c;
    printf("%s %s\n",a,b);
    return 0;
}