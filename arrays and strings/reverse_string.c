#include<stdio.h>
#include<string.h>
int main(){
	char str[]="essam";
	int i;
	for(i=strlen(str);i>=0 ;i--){
		printf("%c",str[i]);
	}
}
