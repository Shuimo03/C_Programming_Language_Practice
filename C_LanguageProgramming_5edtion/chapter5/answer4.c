#include<stdio.h>
#include<string.h>
int main(){

    char c;
    c = getchar();
    int letters = 0;
    int nums = 0;
    int otherchars = 0;
    int blank = 0;
    while(c!='\n'){
        if((c  >= 'a' && c <= 'z') || (c >= 'A' && c<='Z')){
            letters++;
        }
        else if(c == ' '){
            blank++;
        }
        else if(c >= '0' && c <= '9'){
             nums++;
        }
        else{
            otherchars++;
        }
        c = getchar();
    }
     printf("字母个数:%d\n", letters);
     printf("数字个数:%d\n", nums);
     printf("空格数:%d\n", blank);
     printf("其他字符:%d\n", otherchars);
     return 0;
}