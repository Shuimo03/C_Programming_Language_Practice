#include<stdio.h>
#include<string.h>

void StatisticsStr(char s1[]){
	int latters = 0;
	int sums = 0;
	int blacks = 0;
	int others = 0;
	for(int i = 0; i < strlen(s1); i++){
		if((s1[i] >='a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')){
			latters++;
		}
		else if(s1[i] >= '0' && s1[i] <='9'){
			sums++;
		} 
		else if(s1[i] == ' '){
			blacks++;
		}
		else{
			others++;
		}
	}
	
	printf("%s��%d����ĸ,%d������,%d���ո�,%d�������ַ�\n",s1,latters,sums,blacks,others);
}

int main(){
	
	char s1[80];
	gets(s1);
	StatisticsStr(s1);
	return 0;
}
