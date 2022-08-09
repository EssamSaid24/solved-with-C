//F = C x (9/5) + 32
#include<stdio.h>
int main(){
	setbuf(stdout,NULL);
	int c,f;
	printf("Enter temperature in celsius\n");
	scanf("%d",&c);
	f = c * (9/5) + 32;
	printf("temperature is %d Fahrenheit",f);



}


