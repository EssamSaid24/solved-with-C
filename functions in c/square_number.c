#include<stdio.h>
#include<math.h>
int square (int num);
int main(){

	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	printf("%d", square(number));
}
int square (int num){
	if (num == pow(sqrt(num),2)){
		return 1;
	}
	else{
		return 0;
	}

}
