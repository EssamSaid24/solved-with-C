#include<stdio.h>
struct time{
	int hours;
	int minute;
}time_1,time_2;
void difference (struct time time_1,struct time time_2);
int main(){
	setbuf(stdout,NULL);
	//struct time time_1;
	printf("enter the start time in hour and minute ");
	scanf("%d %d",&time_1.hours,&time_1.minute);
	//struct time time_2;
	printf("enter the end time in hour and minute ");
	scanf("%d %d",&time_1.hours,&time_2.minute);
	difference(time_1,time_2);
}
void difference (struct time time_1,struct time time_2){
	int result_hour = time_1.hours - time_2.hours;
	int result_minute = time_1.minute - time_2.minute;
	if(result_minute<0){
		result_minute=-result_minute;
	}
	if(result_hour<0){
		result_hour=-result_hour;
	}
	printf("difference in hour %d\n",result_hour);

	printf("difference in minute %d",result_minute);
}
