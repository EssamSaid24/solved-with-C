#include<stdio.h>
int cube(int number);
int main(){
	int number;
	setbuf(stdout,NULL);
	printf("enter the number ");
	scanf("%d",&number);
	//int final = cube(number);
	printf("the cube of number is %d",cube(number));

}
int cube(int number){
	int result;
	result = number*number*number;
	return result;

}
