#include<stdio.h>
int fib (int x);
int main(){
	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	printf( "%d",fib(number));
}
int fib (int x){

	if ((x == 0)||(x == 1)){
		return x;
	}else{
	return	fib(x - 1) + fib(x - 2);
		}
	}


