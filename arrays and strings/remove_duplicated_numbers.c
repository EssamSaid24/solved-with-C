#include<stdio.h>
void duplicate(int size, int arr[]);
int main(){

	int size = 6;
	int arr1[] = {1,2,2,3,3,4};
	duplicate(size,arr1);
}
void duplicate(int size, int arr[]){
	int arr2[size];
	int i=0;
	int j=0;
	int count=0;
	for(i=0;i<size;i++){
		if(arr[i]!=arr[i+1]){
			arr2[j]=arr[i];
			count++; // to know the new size of the new array
			j++;
		}
	}
	arr2[j++]=arr[size-1]; // to add last element in first array

for (int i = 0; i < count; i++){
    printf("%d ", arr2[i]);}
}
