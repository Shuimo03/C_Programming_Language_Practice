#include<stdio.h>
#include<math.h>
//int maxn = 100;
//int prime[maxn+1];
//int visit[maxn+1];

//计算多少个素数 
//int sumPrime(int n){
//	for(int i = 0 ; i <= n; i++){
//		visit[i] = 0;
//	}
//	for(int i = 0; i*i <= n; i++){
//		if(!visit[i]){
//			for(int j = i*i; j<=n; j+=i){
//			 visit[j] = 1;
//		}
//		int k = 0; // 计算素数个数
//		for(int i = 2; i<=n; i++) {
//			if(!visit[i]){
//				prime[k++] = i;
//			}
//		}
//	}
//	return k;
//}

//判断是否为素数 
int isPrime(int n){
	int temp = sqrt(n);
	for(int i = 2; i <= temp; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	
	int n = 0;
	scanf("%d",&n);
	if(isPrime(n)){
		printf("%d是素数\n",n);
	}else{
		printf("%d不是素数\n",n);
	}
	return 0;
}
