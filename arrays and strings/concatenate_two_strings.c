#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="programming";
	char str2[]=" is fun ";
	char str3[100];
	int i=0 , j=0;
	while(str1[i]!='\0'){
		str3[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!='\0'){
		str3[j]=str2[i];
		i++;
		j++;
	}
	printf("%s",str3);
}
