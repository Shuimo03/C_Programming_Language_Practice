#include<stdio.h> 

void ox(int x){
	printf("%x",x);
}

int main(){
	int a = 0;
	scanf("%d",&a);
	ox(a);
	return 0;
}
