#include<stdio.h>
void distinct(int size ,char str[]);
int main(){
	int strSize = 5;
	char str[]= "said" ;

	distinct(strSize,str);

}
void distinct(int size ,char str[]){
	int i, j, is_repeated=1;
	for (i = 0; i < size ; i++ ){
		for(j= i+1 ; j < size; j++){
			if(str[i]==str[j]){
				is_repeated=0;
				//continue;
			}

			}


			}
	if(is_repeated==0){
		printf("false");}
	else{
		printf("true");
		}

	}


