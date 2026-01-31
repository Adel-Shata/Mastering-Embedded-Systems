/*
 ============================================================================
 Name        : EX3_C_Program_To_Add_Two_Integers.c
 Author      : Adel Shata
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Add Two Integers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int integer1, integer2;
	printf("Enter Two Integers: "); /* Asking the user to enter two integers */
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&integer1,&integer2); /*Taking the two integer from the user*/
	printf("Sum = %d", (integer1+integer2));
	return 0;
}
