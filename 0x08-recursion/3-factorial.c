#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @x: The number to compute the factorial for.
 *
 * Return: Factorial of x. If x is negative, returns -1 to indicate an error.
 */
int factorial(int x)
{
	if (x < 0)
	{
		/* Factorial is not defined for negative numbers */
		return (-1);
	}
	else if (x == 0)
	{
		/* The factorial of 0 is 1 */
		return (1);
	}
	else
	{
		/* Recursive calculation of factorial */
		return (x * factorial(x - 1));
	}
}
