#include<stdio.h>
int main(){

	int length = 0;
	char str[]="programming is fun";
	char *ch = str;
	while(*ch != '\0'){
		length++;
		ch++;
	}
	printf("length of string %s = %d",str,length);
}
