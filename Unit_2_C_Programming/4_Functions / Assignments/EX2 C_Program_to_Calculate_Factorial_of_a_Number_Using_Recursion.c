/*
 * EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 *
 * Created on : Aug 6, 2023
 *     Author : hamad sayed
 *      
 * Description: This program calculates the factorial of a specific number entered by the user using recursion .
 */

#include <stdio.h>

/* ----------------------------------------------------------------------- */
/* ---------------------- Functions Declaration ---------------------------*/
/* ----------------------------------------------------------------------- */

int calculateFactorial(int number);

/* Main Function */
int main()
{
	int number, result;			/* declaring the required variables */

	/* Asking the user to enter a specific number */
	printf("Enter an positive integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	result = calculateFactorial(number); /* call the function to calculate the factorial */

	printf("Factorial of %d : %d", number, result);	/* print the factorial*/

	return 0;
} /* End of Main Function */

/* ----------------------------------------------------------------------- */
/* ---------------------- Functions Definition ----------------------------*/
/* ----------------------------------------------------------------------- */

int calculateFactorial(int number)
{
	if(number == 1 || number == 0)
		return 1; /* in case of factorial of 1 */

	return number * calculateFactorial(number-1); /* getting the factorial using recursion function */
	
} /*End of calculateFactorial Function*/
