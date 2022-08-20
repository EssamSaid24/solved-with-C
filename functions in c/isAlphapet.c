#include<stdio.h>
void is_alphapet(char c);
int main(){
	char c;
	setbuf(stdout,NULL);
	printf("enter the the character ");
	scanf("%c",&c);
	is_alphapet(c);

}
void is_alphapet(char c){
	//char x = c;
	if ((c>='a' && c<='z')|| (c>='A' && c<='Z')){
	printf("%c is an alphabet",c);

	}else{
		printf("%c is not an alphabet",c);
	}

}
