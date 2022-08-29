#include<stdio.h>
int summation(int numbers_size, int* numbers);
int main(){
	int number = 5;
	int arr[]={1,2,3,4,5};
	printf("%d",summation(number,arr));
}
int summation(int numbers_size, int* numbers){
	int i;
	int sum = 0;
	for(i=0 ; i<numbers_size ;i++ ){
		sum+=numbers[i];
	}
	return sum;
}
