#include<stdio.h>
int main(){
	setbuf(stdout,NULL);
	int num_1,num_2,num_3;
	printf("Enter the three numbers ");
	scanf("%d %d %d",&num_1,&num_2,&num_3);
	int temp = num_1;
	if(num_2 < num_1){
		temp = num_2;
	}
	 if(temp < num_3){
		printf("the smallest number is %d",temp);
	}else{
		printf("the smallest number is %d",num_3);
	}

}
