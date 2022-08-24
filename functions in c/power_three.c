#include<stdio.h>
int is_powered (int num);
int main(){
	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	printf("%d",is_powered (number));
}
int is_powered (int num){
	while(num % 3 == 0){
		num/=3;

	}
	//printf("%d\n",num);
	if(num == 1){
		return 0;

	}else{
		return 1;

	}




}
