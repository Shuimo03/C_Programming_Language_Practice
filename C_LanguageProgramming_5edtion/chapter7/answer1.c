#include<stdio.h>

//最大公约数 
int gcd(int n, int m){
	return m == 0 ? n:gcd(m,n%m);
}

//最小公倍数 
int lcm(int n, int m){
	return n/gcd(n,m)*m;
}

int main(){
	
	int n = 0, m = 0;
	scanf("%d %d",&n,&m);
	int GCD = gcd(n,m);
	int LCM = lcm(n,m);
	printf("%d和%d的最大公约数是%d最小公倍数是%d\n",n,m,GCD,LCM);
	return 0;
}
