#include <stdio.h>

int count1s(unsigned int num)
{
    unsigned char i;
    int count=0;

    unsigned char totalBits=sizeof(num)*8;


    for(i=0;i< totalBits;i++)
    {
        if( num & (1<< i) ){
            count++;

        }
    }

    return count;
}

int main()
{

	setbuf(stdout,NULL);
	unsigned int number;
	printf("enter the number ");
	scanf("%u",&number);
    printf("\nTotal number of 1's are : %d\n",count1s(number));

    return 0;
}
