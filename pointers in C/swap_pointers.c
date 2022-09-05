#include<stdio.h>
void swap (int *p1,int *p2);
int main(){
	int x = 1;
	int y = 8;
	int *ptr = &x;
	int *ptr2 = &y;
	printf("before swapping\n%d\t%d",x,y);
	swap(ptr,ptr2);
}
void swap (int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("\nafter swapping\n");
	printf("%d\t%d",*p1,*p2);
}
