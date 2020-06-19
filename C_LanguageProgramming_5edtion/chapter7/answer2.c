#include<stdio.h>
#include<math.h>

int main(){
	
	double a,b,c,x1,x2,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a!=0){
		d = sqrt(b*b-4*a*c);
		x1 = (-b+d)/(2*a);
		x2 = (-b-d)/(2*a);
		if(x1 < x2){
			printf("%0.2lf %0.2lf\n",x2,x1);
		}
		else{
			printf("%0.2lf %0.2lf\n",x1,x2);
		}
	}
	return 0;
}
