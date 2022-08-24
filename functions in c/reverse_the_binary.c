#include<stdio.h>
void reverse (int x);
int main(){
	setbuf(stdout,NULL);
	int number;
	printf("enter the binary number ");
	scanf("%d",&number);
	reverse(number);

}
void reverse (int x){
	int remainder=0,reverse;
	while(x!=0){
		remainder = x%10;
		reverse = reverse*10 + remainder;
		x/=10;
	}
	printf("%d",reverse);
}
