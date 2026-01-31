/*
 ============================================================================
 Name        : EX4_C_Program_To_Multiply_Two_Floating_Point_Numbers.c
 Author      : Adel Shata
 Version     :
 Copyright   : Your copyright notice
 Description : C Program To Multiply Two Floating Point Numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float piont1, piont2;
	printf("Enter Two Integers: "); /* Asking the user to enter two integers */
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&piont1,&piont2); /*Taking the two integer from the user*/
	printf("Multiplication = %f", (piont1*piont2));/*Printing the result of the multiplication*/
	return 0;
}
