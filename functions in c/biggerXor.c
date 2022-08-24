#include<stdio.h>
void bigXor(int l, int r);
int main(){
	int num1,num2;
	setbuf(stdout,NULL);
	printf("Enter the Constrains: ");
	scanf("%d %d",&num1,&num2);
	bigXor(num1,num2);
}
void bigXor(int l, int r){
	int i , j , z , max = 0  ;
	for(i=l ; i<=r ; i++){
		for(j=l;j<=r;j++){
			z = i ^ j;

			if (z >= max){
				max = z;
			}
			}

	}
	printf("the max value of xor between (%d %d) is %d\n",l,r,max);

}
