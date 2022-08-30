#include<stdio.h>
#include<string.h>
int main(){
	setbuf(stdout,NULL);
	char character;
	printf("enter the char ");
	scanf("%c",&character);
	int count=0;
	int number = 10;
	int i;
	char str [10]="essam said";
	for(i=0;i<number;i++){
			if(str[i]==character){
				count ++;
			}
		}

	printf("%d",count);
}
