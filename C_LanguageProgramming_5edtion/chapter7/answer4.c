#include<stdio.h>

void mat(int arr[][3]){
	for(int i = 0; i < 3; i++){
		for(int j = i+1; j < 3; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[i][j] = temp;
		}
	}
}

int main(){
	
	int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d",arr[i][j]);
			printf("\n");
		}
	}
	void mat(arr);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d",arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}
