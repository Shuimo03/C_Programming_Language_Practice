#include<stdio.h>
#include<string.h>
int main(){

    char str[20];
    scanf("%s", str);
    int nums = 0; //数字
	int blacks = 0; //空格
	int others = 0; //其他字符
	int latters  =0; //字母 
    for(int i = 0; i < 20; i++){
    	if((str[i] >= 'a' && str[i] <='z')||(str[i] >= 'A' && str[i] <= 'Z')){
    		latters++;
		}
		else if(str[i] == ' '){
			blacks++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			nums++;
		}
		else{
			others++;
		}
	}
	printf("%s 有%d个数字 %d个空格 %d个字母 %d个其他字符\n",str,nums,blacks,latters,others);
    return 0;
}
