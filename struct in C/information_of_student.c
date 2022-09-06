#include<stdio.h>
struct student{
	char *name;
	int age;
	int mark;
	int roll;

}student_1;

#include<string.h>
int main(){
	student_1.name="essam";
	student_1.age = 22;
	student_1.mark = 85;
	student_1.roll = 5;
	printf("my name is %s\n",student_1.name);
	printf("my age is %d\n",student_1.age);
	printf("my mark is %d\n",student_1.mark);
	printf("my roll is %d\n",student_1.roll);

}

/*#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
	setbuf(stdout,NULL);

    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

}*/
