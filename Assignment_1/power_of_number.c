#include<stdio.h>
int main(){
	float number;
	float result=1;
	float power;
	setbuf(stdout,NULL);
	printf("Enter the number ");
	scanf("%f",&number);
	printf("Enter the power ");
	scanf("%f",&power);
	int i;
	for(i=1;i<=power;i++){
		result*=number;
	}
	printf("%f",result);
}
