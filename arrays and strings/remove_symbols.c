#include<stdio.h>
#include<string.h>
int main(){
	char str[]="essam_($)(%)(^)(&)(%)said";
	int i;
	for(i=0;i<strlen(str);i++){
		if ((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z')){
			printf("%c",str[i]);
		}
	}
}
