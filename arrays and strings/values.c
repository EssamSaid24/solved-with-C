#include<stdio.h>
void getNextNumber(int num1 ,int num2);
int main(){
	setbuf(stdout,NULL);
	int low,high;
	printf("Enter two numbers ");
	scanf("%d %d",&low,&high);
	getNextNumber(low,high);
}
void getNextNumber(int num1 ,int num2){

	int size = num2-num1+1;
	int arr[size];

	int i=0;
	int j=0;
	while(i < size){
		arr[i]=num1;

		if(num1>num2){
			break;
		}

		i++;
		num1++;
	}
	for(j=size-1;j>=0;j--){
		printf("%d\t",arr[j]);
	}
	printf("\narray size is %d",size);

}
