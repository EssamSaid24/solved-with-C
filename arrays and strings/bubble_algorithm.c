#include<stdio.h>
void sort (int size , int arr[]);
void print(int size,int arrSort[]);

int main(){

	int number = 5;
	int str[]={12,10,5,-9,5};
	sort(number,str);

}
void sort (int size , int arr[]){
	int i,j;
	int k = 5;
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}

		}

	}
	print(k,arr);
}

void print(int size,int arrSort[]){
	int i;
	for (i=0;i<size;i++){
		printf("%d\t",arrSort[i]);
	}
}
