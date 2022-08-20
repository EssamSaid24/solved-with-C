#include<stdio.h>
int is_odd(int num);
int main(){
	int number;
	setbuf(stdout,NULL);
	printf("enter the number ");
	scanf("%d",&number);
	int res =  is_odd(number);
	if( res == 0){
		printf("(even)");

	}
	else{
		printf("%d (odd)",res);
	}
}
int is_odd(int num){
	int result;
	if (num%2==0){
		result = 0;
	}
	else{
		result = 1;
	}
	return result;
}
