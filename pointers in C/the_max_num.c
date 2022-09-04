#include<stdio.h>
#define size 5
int main(){
	int arr[size] = {-4,-3,-1,2,0};
	int *ptr[size];
	int i ;
	for(i=0;i<size;i++){
		ptr[i]=&arr[i];
	}
	int max = *ptr[0];
	int j;
	for(j=0;j<size;j++){
		if(*ptr[j]>max){
			max=*ptr[j];
		}
	}
	printf("the max value is %d",max);
}
