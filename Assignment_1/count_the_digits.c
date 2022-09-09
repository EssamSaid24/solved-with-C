#include<stdio.h>
int main(){
	int number;
	int count;
	setbuf(stdout,NULL);
	printf("enter the number ");
	scanf("%d",&number);

		while(number>0){
			number/=10;
			count++;
		}
		printf("%d",count);

}

