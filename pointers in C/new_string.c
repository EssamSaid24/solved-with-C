#include<stdio.h>
#include<string.h>
int main(){
	char str[60]="bat";
	int x = strlen(str);
	printf("%d\n",x);
	char newStr[3];
	newStr[0]=str[x-1];
	newStr[1]= ' ';
	newStr[2]=str[x-2];
	int i;
	for(i=0;i<3;i++){
		printf("%c",newStr[i]);
	}
}
