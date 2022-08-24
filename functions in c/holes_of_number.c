#include<stdio.h>
void numOfHoles(int x);
int main(){
	setbuf(stdout,NULL);
	int number;
	printf("enter the number ");
	scanf("%d",&number);
	numOfHoles(number);

}
void numOfHoles(int x){
	int holes;
	int y;
	while (x > 0){
	  y =  x % 10;
	  //printf("%d\n",y);
	  x = (int) x/10 ;
	  if(y==8){
		  holes+=2;

	  }
	  if((y==0)||(y==4)||(y==9)||(y==6)){
		  holes+=1;
	  }
	}
	printf("number of holes = %d",holes);
}

