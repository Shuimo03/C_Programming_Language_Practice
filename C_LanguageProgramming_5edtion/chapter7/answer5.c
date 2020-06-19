#include<stdio.h>
#include<string.h>
void reversal(char str[10]){
	int i = 0;
	int j = strlen(str)-1;
	while(i < j){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
} 
int main(){
	char str[10];
	scanf("%s",str);
	printf("%s\n",str);
	reversal(str);
	//printf("%s",str);
	return 0;
}

