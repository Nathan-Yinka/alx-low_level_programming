#include"main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @b: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int b)
{
	int a;

	a = b % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
