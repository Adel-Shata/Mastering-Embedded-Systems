/*
 ============================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Adel Shata
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Swap Two Numbers Without Temp Variable, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int integer1, integer2;
	printf("Enter First Integer: "); /* Asking the user to first integers */
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&integer1); /*Taking the first integer from the user*/
	printf("Enter Second Integer: "); /* Asking the user to second integers */
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&integer2); /*Taking the second integer from the user*/
	integer1 ^= integer2;
	integer2 ^= integer1;
	integer1 ^= integer2;
	printf("First Integer = %d\nSecond Integer = %d", integer1, integer2); /*Printing the swapped numbers*/

	return 0;
}
