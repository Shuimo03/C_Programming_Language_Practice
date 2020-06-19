#include<stdio.h>
#include<string.h>

int alphabetic(char c){
	if((c >= 'a' && c<= 'z')||(c >= 'A' && c<='Z')){
		return 1;
	}
	else{
		return 0;
	}
}

int longest(char string[]){
	int flag = 1;
	int point = 0;
	int len = 0;
	int length = 0;
	for(int i = 0; i <= strlen(string); i++){
		if(alphabetic(string[i])){
			if(flag){
				point = i;
				flag = 0;
			}
			else{
				len++;
			}
			else{
				flag = 1;
				if(len >= length){
					len = len;
					place = point;
					len = 0;
				}
			}
		}
	}
	return place;
}

int main(){
	
	char line[100];
	printf("input one line:\n");
	gets(line);
	printf("The longest word is :");
	for(int i = longest(line); alphabetic(line[i]);i++){
		printf("%c",line[i]);
	}
	printf("\n");
	
}


