#include<stdio.h>
int main(){
	int y = 145479;
	short int *x = &y;
	printf("before swapping\n");
	printf("x= %d\t",*x);
	short int *w = ++x;
	printf("x= %d\t\n",*x);
	short int *ptr = w;
	w = &y;
	x = ptr;
	printf("after swapping\n");
	printf("x= %d\t",*x);
	printf("w= %d\t",*w);

}
