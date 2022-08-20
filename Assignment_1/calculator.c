#include<stdio.h>
int main(){
	char operation;
	float num_1;
	float num_2;
	setbuf(stdout,NULL);
	printf("what is the operation? ");
	scanf("%c", &operation);
	printf("enter the two numbers ");
	scanf("%f %f",&num_1,&num_2);
	switch(operation){
	case '+':

		printf("the result is %f",num_1+num_2);
		break;
	case '-':

		printf("the result is %f",num_1-num_2);
		break;
	case '*':

		printf("the result is %f",num_1*num_2);
		break;

	case '/':

		printf("the result is %f",num_1/num_2);
		break;

	}

}

