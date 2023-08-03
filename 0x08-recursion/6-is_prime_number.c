#include "main.h"

int is_prime_recursive(int number, int divisor);

/**
 * is_prime_number - Determines if a number is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}

/**
 * is_prime_recursive - Recursively checks if a number is prime.
 * @number: The number to evaluate.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if number is prime, 0 if not.
 */
int is_prime_recursive(int number, int divisor)
{
	if (divisor == 1)
		return (1);

	if (number % divisor == 0)
		return (0);

	return (is_prime_recursive(number, divisor - 1));
}
