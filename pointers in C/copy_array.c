#include<stdio.h>
void copy (int arr_size, int *array);
#define size 10
int main(){
	setbuf(stdout,NULL);
	int number;
	int arr[size];
	int *ptr = arr;
	printf("enter the size of array (max10) ");
	scanf("%d",&number);
	int i;
	for(i=0;i<number;i++){
		scanf("%d",ptr);
		ptr++;
	}
	int k;
	ptr = &arr[0];
	printf("the original array\n");
	for(k=0;k<number;k++){
		printf("%d\t",*ptr);
		ptr++;

	}
	printf("\n");
	copy(number,arr);
}
void copy (int arr_size, int *array){
	int arr2[arr_size];
	int *ptr2 = arr2;
	int j;
	for(j=0; j<arr_size; j++){
		*ptr2 = array[j];
		ptr2++;
	}
	ptr2=&arr2[0];
	printf("copying array\n");
	int k;
	for(k=0;k<arr_size;k++){
		printf("%d\t",*ptr2);
		ptr2++;
	}
}
