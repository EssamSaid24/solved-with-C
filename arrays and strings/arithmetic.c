#include<stdio.h>
void number(int number);
int main(){
	setbuf(stdout,NULL);
	int num;
	printf("enter the number ");
	scanf("%d",&num);
	number(num);
}
void number(int number){
	int i;
	int final=1;
	for(i=1;i<number;i++){
		final+=2;
	}
	printf("%d",final);
}
