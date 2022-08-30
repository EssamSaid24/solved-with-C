#include<stdio.h>
int compare(int size1,int arr1[],int size2,int arr2[]);

int main(){

	int size   = 6;
	int size2  = 6;
	int arr1[] = {4,3,5,4,6,2};
	int arr2[] = {4,3,5,4,6,2};
	compare(size,arr1,size2,arr2);
	printf("%d ",compare(size,arr1,size2,arr2));

}
int compare(int size1,int arr1[],int size2,int arr2[]){
	int count = 0;
	if(size1!=size2){
		return 0;
	}
	else{
		int i;
		for(i=0;i<size1;i++){
			if(arr1[i]==arr2[i]){
				count++;
			}
		}
	}
	if(count == size1){
		return 1 ;
	}
	else{
		return 0;
	}
}
