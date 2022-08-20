#include<stdio.h>
void calculate(float num1,float num2,char operate);
int main(){
	char operation;
	float num_1;
	float num_2;
	setbuf(stdout,NULL);
	printf("what is the operation? ");
	scanf("%c", &operation);
	printf("enter the two numbers ");
	scanf("%f %f",&num_1,&num_2);
	calculate(num_1,num_2,operation);
}
void calculate(float num1,float num2,char operate){
	switch(operate){
	case '+':

		printf("the result is %f",num1+num2);
		break;
	case '-':

		printf("the result is %f",num1-num2);
		break;
	case '*':

		printf("the result is %f",num1*num2);
		break;

	case '/':

		printf("the result is %f",num1/num2);
		break;

	}
}
