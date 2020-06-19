#include<stdio.h>
#include<math.h>
//¼ÆËãÃÝº¯Êý 
int fastPow(int a, int n){
	if(n == 1) return a;
	int temp  = fastPow(a,n/2);
	if(n % 2== 1){
		return temp*temp*a;
	}
	else{
		return temp*temp;
	}
}

double solut(double a, double b,double c,double d){
	
	double x = 1.0;
	double x0,f,f1;
	do{
		x0 = x;
		f = ((a * x0+b) * x0+c) * x0+d;
		f1 = (3*a*x0+2*b) * x0+c;
		x = x0-f/f1;
	}while(fabs(x-x0)>=1e-3);
	
	return x;
}

int main(){
	
	double a,b,c,d;
	printf("input a,b,c,d:");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("x = %10.7lf\n",solut(a,b,c,d));
	return 0;
}
