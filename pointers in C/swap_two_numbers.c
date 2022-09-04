#include<stdio.h>
void swap(int number1,int number2);
int main(){
	setbuf(stdout,NULL);
	int num1,num2;
	printf("enter two number ");
	scanf("%d %d",&num1,&num2);
	void(*ptr)(int,int) = swap;
	ptr(num1,num2);
}
void swap(int number1,int number2){
	number1 ^= number2;
    number2 ^= number1;
    number1 ^= number2;
    printf("values after swapping\n%d\t%d",number1,number2);
}
