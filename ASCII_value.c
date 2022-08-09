/*
 * ASCII_value.c
 *
 *  Created on: Aug 9, 2022
 *      Author: essam
 */
#include<stdio.h>
int main(){
	setbuf(stdout,NULL);
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c);
}
