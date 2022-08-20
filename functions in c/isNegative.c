#include<stdio.h>
void is_Negative(int num);
int main(){
	int number;
	setbuf(stdout,NULL);
	printf("enter the number ");
	scanf("%d",&number);
	is_Negative(number);
}
void is_Negative(int num){
	if(num>=0){
		printf("%d is positive",num);

	}
	else{
		printf("%d is negative",num);
	}
}
