#include<stdio.h>

struct students{
	char name[20];
	int age;
	int id;
};
int main(){


	struct students student[10];
	int i;
	for(i=0;i<10;i++){
		setbuf(stdout,NULL);

		printf("enter name for student[%d]\n",i+1);
		scanf("%s",&student[i].name);
		printf("Enter age and id");
	    scanf("%d %d",&student[i].age,&student[i].id);
	}
	  for(i=0;i<10;i++)
	  {
	    printf("\nStudent %d",i+1);
	    printf("\nName: %s",student[i].name);
	    printf("\nAge: %d",student[i].age);
	    printf("\nid: %d",student[i].id);
	    printf("\n");
	  }
}


