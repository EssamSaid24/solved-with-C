#include<stdio.h>
int main(){
	int number = 6;

	int searched_num = 14;
	int arr[]={0,14,4,5,4,6};
	int i;
	for(i=0;i<number;i++){
		if(arr[i]==searched_num){

			printf("the number is in index = %d\t",i);
			break;
		}
		if((i==number-1) && (arr[i]!=searched_num)){
			printf("(Not found) -1");
		}

		}

	}


