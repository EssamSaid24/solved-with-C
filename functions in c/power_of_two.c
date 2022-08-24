#include<stdio.h>
int power (int x);
int main(){

	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	int result = power(number);
	printf("%d",result);

}
int power (int x){
	if(x % 2 == 0){
		return 0;
	}
	else{
		return 1;
	}
}
