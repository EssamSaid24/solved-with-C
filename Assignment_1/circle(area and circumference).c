#include<stdio.h>
#define pi 3.14
int main(){
	setbuf(stdout,NULL);
	float r,area,circumference;
	printf("Enter the radius ");
	scanf("%f",&r);
	area = pi*r*r;
	circumference = 2 * pi * r;
	printf("The area is, %f\n",area);
	printf("The circumference is, %f",circumference);
}
