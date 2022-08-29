#include<stdio.h>
int main(){
	int number = 6;
	int searched_num = 5;
	int arr[]={4,6,9,8,7,6};
	int i=0;
	int greater=-1;
	while(i < number){
		if(arr[i]==searched_num){
			 greater = i;
		}
		if((i==number-1) && (greater==-1)){
			printf("(Not found) -1\n");
		}
		i++;
	}
	if(greater!=-1){
	printf("the number is in index = %d\t",greater);
	}

	}


