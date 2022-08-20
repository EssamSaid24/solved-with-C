#include<stdio.h>

int main(){
	int is_prime = 1 ;
	int number;
	setbuf(stdout,NULL);
	printf("Enter the number ");
	scanf("%d",&number);
	int i;
	for(i=2; i <= number/2; i++) {
		if(number % i == 0){
			is_prime=0;

		}
	}
		if(is_prime==1){
			printf("prime number");
		}
		else{
			printf("not prime number");

	}
}

