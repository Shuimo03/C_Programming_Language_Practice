#include<stdio.h> 
#include<string.h>

void vowel(char s1[],char s2[]){
	int len = strlen(s1);
	int cnt = 0;
	s2[len-1];
	for(int i = 0; i < len-1; i++){
		if(s1[i] == 'a'||s1[i] == 'e' || s1[i] =='i' || s1[i] =='o' || s1[i] =='u'){
			s2[cnt] = s1[i];
			cnt++;
		}
	}
}

int main(){
	
	char s1[]="abcdefg";
	int len = strlen(s1);                             
	char s2[10];
	vowel(s1,s2);
	printf("%s",s2);
	return 0;
}
