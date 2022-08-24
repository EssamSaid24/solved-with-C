#include<stdio.h>
void floor (float x ,float y);
int main(){
	float num1,num2;
	setbuf(stdout,NULL);
	printf("enter the two number ");
	scanf("%f %f",&num1,&num2);
	floor(num1,num2);
}
void floor (float x ,float y){
	float z = x+y;
	printf("%d",(int)z);
}

