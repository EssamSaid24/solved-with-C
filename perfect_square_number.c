/*
 * perfect_square_number.c
 *
 */
#include<stdio.h>
#include<math.h>
int main(){
	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	if(number>=0){
		if(sqrt(number)*sqrt(number) == number){
			printf("%d is a perfect number ",number);
		}
		else{
			printf("%d is not a perfect number ",number);
		}
	}
	else{
		printf("number is negative");
	}
}

