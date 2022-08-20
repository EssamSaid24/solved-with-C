/*
 * q_1.c
 * Result = ((num1 + num2) * 3) – 10
 */
#include<stdio.h>
int main(){
	setbuf(stdout,NULL);
	int num_1,num_2,num_3;
	scanf("%d %d",&num_1,&num_2);
	num_3=((num_1+num_2)*3)-10;
	printf("((%d + %d)*3) - 10 = %d",num_1,num_2,num_3);

}

