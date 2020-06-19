#include<stdio.h>

int main(){
	char arr[5] = {'*','*','*','*','*'};
	char space = ' ';
	for(int i = 0; i < 5; i++){
		printf("\n");
		printf(" ");
		for(int j = 1; j <= i; j++){
			printf("%c",space);
		}
		for(int k = 0; k <5; k++){
			printf("%c",arr[k]);
		}
	}
	printf("\n");
	return 0;
}
