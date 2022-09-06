#include<stdio.h>
struct complex{
	float real;
	float img;
};
struct complex_2{
	float real;
	float img;
};
void sum(struct complex complex1 ,struct complex_2 complex2);

int main(){
	setbuf(stdout,NULL);

	struct complex complex1;
	struct complex_2 complex2;
	printf("enter the real part of first number ");
	scanf("%f",&complex1.real);
	printf("enter the img part of first number ");
	scanf("%f",&complex1.img);
	printf("\n");
	printf("enter the real part of second number ");
	scanf("%f",&complex2.real);
	printf("enter the img part of second number ");
	scanf("%f",&complex2.img);
	printf("\n");
	sum(complex1,complex2);

}
void sum(struct complex complex1 ,struct complex_2 complex2){
	float result_real = complex1.real+complex2.real;
	float result_img = complex1.img+complex2.img;
	printf("the summation of real %f\n",result_real);
	printf("the summation of img %f",result_img);
}

