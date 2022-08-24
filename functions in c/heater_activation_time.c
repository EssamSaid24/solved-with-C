#include<stdio.h>
void heat_activation(int x);

int main(){

	setbuf(stdout,NULL);
	int number;
	printf("enter the Temperature ");
	scanf("%d",&number);
	heat_activation(number);

}
void heat_activation(int x){
	if ((x>0) && (x<30)){
		printf("required heating time = 7 mins.");
	}
	if((x>=30) && (x<60)){
		printf("required heating time = 5 mins.");

	}
	if((x>=60) && (x<90)){
		printf("required heating time = 3 mins.");

	}
	if((x>=90) && (x<=100)){
		printf("required heating time = 1 mins.");

	}if(x>100){
		printf("0");
	}

}
