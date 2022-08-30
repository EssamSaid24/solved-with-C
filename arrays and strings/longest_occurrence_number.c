#include<stdio.h>
int main(){
	int number=8;
	int i=0;
	int count=0;
	int x=0;
	int searched_number=3;
	int arr[]={3,3,3,4,3,3,2,4};
	while(i<number){
		if(searched_number==arr[i]){
			count++;

		}
		if((searched_number!=arr[i])&&(count>x)){
			   x = count;
			   count=0;
			}

			i++;


	}
	if(x>count){
		printf("longest Occurrence Number %d",x);
	}
	else{
		printf("longest Occurrence Number %d",count);
	}

}
