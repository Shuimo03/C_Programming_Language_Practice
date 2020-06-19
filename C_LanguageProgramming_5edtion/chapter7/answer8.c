#include<stdio.h>
#include<string.h>

void insert(char str[]){
	
	for(int i = strlen(str); i >= 0; i--){
		str[2*i] = str[i];
		str[2*i-1] = ' ';
	}
	printf("output:\n%s\n",str);
}

int main(){
	
	char str[80];
	printf("input four digits:");
	scanf("%s",str);
	insert(str);
	return 0;
}
