#include<stdio.h>

struct Student{

    int studentnum;
    char *name[20];
    char sex;
    char *address[20];
} student;

int main(){
    student.studentnum = 10101;
    student.name = "Li Lin";
    student.sex = 'M';
    student.address[0] = "123 Beijing Road";
    printf("你的的信息如下\n");
    printf("%d %s %c %s",student.studentnum,student.name,student.sex,student.address);
    return 0;
}