#include<stdio.h>
void sort(int size , int arr[]);
void print(int size,int arrSort[]);

int main(){

	int number = 5;
	int str[]={5,4,8,0,2};
	sort(number,str);

}
void sort(int size, int arr[]){
	int i,j;

	int k = 5;
	for(i=0; i<size; i++){
		int smallest = i;
		for(j=i+1; j<size; j++){
			if(arr[j] < arr[smallest]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}

		}

	}
	print(k,arr);
}

void print(int size, int arrSort[]){
	int i;
	for (i=0;i<size;i++){
		printf("%d\t",arrSort[i]);
	}
}
