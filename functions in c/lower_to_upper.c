#include<stdio.h>
#include <ctype.h>
void lower_to_upper(char x);
int main(){

	char letter;
	setbuf(stdout,NULL);
	printf("enter the letter ");
	scanf("%c",&letter);
	lower_to_upper(letter);

}
void lower_to_upper(char x){
	if((x>='A') && (x<='Z')){
		printf("the letter is in upper case");
	}else{
	x = toupper(x);
	printf("the upper case is %c",x);

	}
}
