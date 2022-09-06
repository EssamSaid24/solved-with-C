#include<stdio.h>
enum control{
	level1=1,level2,level3
};
int main(){
	enum control level = level1;
	if(level==1){
		printf("increase speed of fun by 10%\n");
	}
	level = level2;
	if(level==2){
		printf("increase speed of fun by 20%\n");
	}
	level = level3;
	if(level==3){
		printf("increase speed of fun by 30%");
	}

}
