#include<stdio.h>
union family_name{
	char *first_name;
	char *last_name;
};
int main(){
	union family_name family_1;
	family_1.first_name = "essam\n";
	printf("%s",family_1.last_name);
	printf("size of union is %ld ",sizeof(family_1));
}
