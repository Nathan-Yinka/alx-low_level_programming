#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * print_number - prints an array of integers as a number
 * @arr: array of integers
 * @size: size of the array
 */
void print_number(int *arr, int size)
{
	int i, start = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] != 0)
			start = 1;

		if (start)
			_putchar(arr[i] + '0');
	}
	if (!start)
		_putchar('0');

	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int len1, len2, len, i, carry, digit1, digit2;
	int *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		errors();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = argv[1][len1] - '0';
		carry = 0;

		for (len2 = _strlen(argv[2]) - 1; len2 >= 0; len2--)
		{
			digit2 = argv[2][len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	print_number(result, len - 1);

	free(result);
	return (0);
}
