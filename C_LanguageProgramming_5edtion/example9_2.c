#include <stdio.h>

struct Student{
     char name[20];
    int studentnum;
    int score;
} student1,student2;

int main(){

    struct Student max;
    scanf("%s %d %d",student1.name,&student1.studentnum, &student1.score);
    scanf("%s %d %d",student2.name,&student2.studentnum, &student2.score);
    if(student1.score > student2.score){
        max = student1;
    }
    else{
        max = student2;
    }
    printf("max = %s %d %d\n",max.name,max.studentnum, max.score);
    return 0;
}