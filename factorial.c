#include<stdio.h>
int main(){
	int number;
	int sum=1;
	setbuf(stdout,NULL);
	printf("Enter the number ");
	scanf("%d",&number);
	setbuf(stdout,NULL);
	if (number > 0){
		while(number>0){
			sum = sum*number;
			number--;

		}
		printf("the result is %d",sum);
	}

	else{
		printf("error number");
	}
}

