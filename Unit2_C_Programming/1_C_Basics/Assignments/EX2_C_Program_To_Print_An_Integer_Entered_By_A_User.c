/*
 ============================================================================
 Name        : EX2_C_Program_To_Print_An_Integer_Entered_By_A_User.c
 Author      : Adel Shata
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Print An Integer Entered By A User, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int integer;
	printf("Enter An Integer: "); /* Asking the user to enter an integer */
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&integer); /*Her the user will enter the integer*/
	printf("Your Entered Integer = %d", integer); /*Print the integer entered by the user*/
	return 0;
}
