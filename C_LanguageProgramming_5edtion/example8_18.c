#include<stdio.h>

int main(){
    char a[] = "I am a student.";
    char b[20];
    int cnt = 0;
    for (int i = 0; *(a + i) != '\0';i++){
        *(b + i) = *(a + i); // b[i] = a[i];
        cnt++;
    }
    *(b + cnt) = '\0'; //b[cnt] = '\0;
    printf("a = %s\n", a);
    printf("b = ");
    for (int i = 0; *(b + i) != '\0'; i++){
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;

}

/**
 * int main(){

    char a[] = "I am a student.";
    char b[15];
    int cnt = 0;
    for (int i = 0; *(a + i) != '\0';i++){
        *(b + i) = *(a + i); // b[i] = a[i];
        cnt++;
    }
    *(b + cnt) = '\0'; //b[cnt] = '\0;
    printf("a = %s\n", a);
    printf("b = ");
    for (int i = 0; *(b + i) != '\0'; i++){
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;
}
**/