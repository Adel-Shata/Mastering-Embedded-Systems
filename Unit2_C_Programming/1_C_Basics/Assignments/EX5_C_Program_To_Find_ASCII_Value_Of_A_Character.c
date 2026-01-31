/*
 ============================================================================
 Name        : EX5_C_Program_To_Find_ASCII_Value_Of_A_Character.c
 Author      : Adel Shata
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Find ASCII Value Of A Character, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("Enter a character: "); /*Asking the user to enter a character */
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);/*Taking a character from the user*/
	printf("ASCII value of %c = %d",character,character);/*printing the ASCII value of the entered character*/
	return 0;
}
