#include<stdio.h>

struct Student{

    int num;
    char name[20]; // char *name;
    char sex;
    int age;
} Student;

int main(){

    printf("struct = %p \n",&Student); //0000000000407980
    printf("stduent.num = %p\n", &Student.num); //0000000000407980
    printf("students.name = %p\n", &Student.name);//0000000000407984
    printf("students.sex = %p\n", &Student.sex); // 0000000000407998
    printf("students.age = %p\n",&Student.age); // 000000000040799C
    printf("%lld\n", &Student.age - &Student.num);
    return 0;
}