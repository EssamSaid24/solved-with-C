#include<stdio.h>
#define size 4
int main(){
	int sum = 0;
	int arr[size]={1,2,4,5};
	int *ptr = &arr;
	int i;
	for (i=0;i<size;i++){
		sum+=*ptr;
		ptr++;
	}
	printf("sum of array = %d",sum);
}
