#include<stdio.h>
#include<string.h>
int main(){

    char str[20];
    scanf("%s", str);
    int nums = 0; //����
	int blacks = 0; //�ո�
	int others = 0; //�����ַ�
	int latters  =0; //��ĸ 
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
	printf("%s ��%d������ %d���ո� %d����ĸ %d�������ַ�\n",str,nums,blacks,latters,others);
    return 0;
}
