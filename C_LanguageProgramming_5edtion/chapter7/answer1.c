#include<stdio.h>

//���Լ�� 
int gcd(int n, int m){
	return m == 0 ? n:gcd(m,n%m);
}

//��С������ 
int lcm(int n, int m){
	return n/gcd(n,m)*m;
}

int main(){
	
	int n = 0, m = 0;
	scanf("%d %d",&n,&m);
	int GCD = gcd(n,m);
	int LCM = lcm(n,m);
	printf("%d��%d�����Լ����%d��С��������%d\n",n,m,GCD,LCM);
	return 0;
}
