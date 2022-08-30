#include<stdio.h>
void reverse(int arrsize, int numbers[]);
int main(){
	int size = 4;
	int number[]={-9,5,4,6};
	reverse(size,number);
}
void reverse(int arrsize,int numbers[]){
	int i;
	int j;
	int arr2[4];
	for(i=arrsize-1; i>=0; i--){
		arr2[j]=numbers[i];
		j++;
	}
	for(j=0;j<arrsize;j++){
		printf("%d ",arr2[j]);
	}
}
