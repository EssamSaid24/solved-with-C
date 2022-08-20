#include<stdio.h>
int main(){
	setbuf(stdout,NULL);
	printf("Enter the two numbers ");
	int num_1,num_2;
	scanf("%d %d",&num_1,&num_2);
	if(num_1 > num_2){
		printf("the higher number is %d",num_1);
	}else if(num_2 > num_1){
		printf("the higher number is %d",num_2);
	}
	else{
		printf("the two numbers are equal %d",num_1);
	}
}
