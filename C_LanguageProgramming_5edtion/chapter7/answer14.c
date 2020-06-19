#include<stdio.h>



int main(){
	
	int arr[10];
	for(int i = 0; i < 5; i++){
		scanf("%d",&arr[i]);
	}

	double sum = 0.0;//每门课成绩
	double students = 0.0; //学生平均分 
	for(int i = 0; i < 5; i++){
		sum+=arr[i];
	}

	return 0;
}
