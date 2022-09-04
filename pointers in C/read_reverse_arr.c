#include<stdio.h>
#define size 10
int main(){
	setbuf(stdout,NULL);
	int number;
	int arr[size];
	int *ptr = arr;
	printf("enter the size of array ");
	scanf("%d",&number);
	int i;
	for(i=0; i<number; i++){
		scanf("%d",ptr);
		ptr++;
	}
	printf("array in the original order \n");
	int j;
	for(j=0;j<number;j++){
		printf("%d\t",arr[j]);
	}
	printf("\n");
	printf("array in the reverse order \n");
	ptr = &arr[number-1];
	int k;
	for(k=number-1;k>=0;k--){
		printf("%d \t",*ptr);
		ptr--;
	}
}
