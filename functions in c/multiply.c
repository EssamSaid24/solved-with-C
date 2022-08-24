#include<stdio.h>
void multiply(int x,int y);
int main(){
	int num1,num2;
	setbuf(stdout,NULL);
	printf("enter the number ");
	scanf("%d %d",&num1,&num2);
	 multiply(num1,num2);

}
void multiply(int x,int y){
	if(x == y*y){
		printf("the first is multiple of the second.");
	}
	else{
		printf("the first isn't multiple of the second.");
	}
}
