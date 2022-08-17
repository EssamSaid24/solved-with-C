#include<stdio.h>
int main(){
	int grade;
	setbuf(stdout,NULL);
	printf("enter the grade ");
	scanf("%d",&grade);
	if(grade>=85){
		printf("Excellent");

	}
	else if(grade>=75){
		printf("very good");

	}
	else if(grade>=65){
		printf("good");

	}
	else{
		printf("pass");
	}
}

