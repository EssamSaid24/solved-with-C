#include<stdio.h>
struct distance{
	float d1;
	float d2;
}inch,feet;
int main(){

	setbuf(stdout,NULL);
	printf("enter the distance in inch ");
	scanf("%f",&inch.d1);
	printf("\n");
	printf("enter the second distance in feet ");
	scanf("%f",&feet.d1);
	printf("\n");
	feet.d2 = inch.d1 / 12.0;
	printf("the summation distance in feet %f",feet.d1+feet.d2);
}
