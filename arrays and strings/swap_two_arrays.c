#include<stdio.h>
void Swap (int a_size,int *a,int b_size,int *b);
int main(){
	int size1=5;
	int size2=5;
	int arr1[]={4,5,9,4,3};
	int arr2[]={1,2,3,4,5};
	Swap(size1,arr1,size2,arr2);
}
void Swap (int a_size, int *a, int b_size, int *b){
	int i;
	int temp[5];
	for (i=0;i<b_size;i++) {
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
	}
	printf("array one after swapping:\n");
	for (i=0;i<b_size;i++) {
			printf("%d\t",a[i]);
		}
	printf("\narray two after swapping:\n");
	for (i=0;i<b_size;i++) {
			printf("%d\t",b[i]);
		}
}
