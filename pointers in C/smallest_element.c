#include<stdio.h>
void smallest(int size_arr,int *array);
#define size 10
int main(){
	setbuf(stdout,NULL);
	int number;
	int arr[size];
	int *ptr = arr;
	printf("enter the size of array (max 10)");
	scanf("%d",&number);
	int i;
	for(i=0;i<number;i++){
		scanf("%d",ptr);
		ptr++;
	}
	smallest(number,arr);
}
void smallest(int size_arr,int *array){
	int *small = &array[0];
	int j;
	for(j=0;j<size_arr;j++){
		if(*small > array[j]){
			*small = array[j];
		}
	}
	printf("the smallest number is  %d",*small);


}
