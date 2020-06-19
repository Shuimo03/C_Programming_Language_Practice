#include<stdio.h>

double polya(double n,double x){
	if(n ==0) return 1;
	else if(n == 1) return x;
	else if(n >=1) return ((2.0*n-1.0)* x *polya(n-1.0,x)-(n-1.0)*polya(n-2.0,x))/n;
}

int main(){
	
	double n,x;
	printf("please input x and n:");
	scanf("%lf %lf",&n,&x);
	double res = polya(n,x);
	printf("%.2lf\n",res);
	return 0;
}
