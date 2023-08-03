#include "main.h"

int find_square_root_recursion(int number, int iterator);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root. If n is negative, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_square_root_recursion(n, 0));
}

/**
 * find_square_root_recursion - Recursively finds the natural
 * square root of a number.
 * @number: The number to calculate the square root of.
 * @iterator: The iterator.
 *
 * Return: The resulting square root. If no exact square root is found,
 * returns -1.
 */
int find_square_root_recursion(int number, int iterator)
{
	if (iterator * iterator > number)
		return (-1);
	if (iterator * iterator == number)
		return (iterator);
	return (find_square_root_recursion(number, iterator + 1));
}
