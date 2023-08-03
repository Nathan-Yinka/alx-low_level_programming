#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The input string.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}