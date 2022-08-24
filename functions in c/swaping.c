#include<stdio.h>
void swap (int x, int y);
int main(){
	int num1,num2;
	setbuf(stdout,NULL);
	printf("enter the two number ");
	scanf("%d %d",&num1,&num2);
	swap (num1,num2);


}
void swap (int x, int y){

	printf("after swapping %d %d",y,x);
}
