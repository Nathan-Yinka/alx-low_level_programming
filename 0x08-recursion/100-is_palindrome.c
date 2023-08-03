#include "main.h"

int is_palindrome_recursive(char *str, int start, int end);
int string_length_recursive(char *str);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_recursive(s, 0, string_length_recursive(s)));
}

/**
 * string_length_recursive - Returns the length of a string recursively.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int string_length_recursive(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + string_length_recursive(str + 1));
}

/**
 * is_palindrome_recursive - Recursively checks the characters for palindrome.
 * @str: The string to check.
 * @start: The starting index of the current check.
 * @end: The ending index of the current check.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome_recursive(char *str, int start, int end)
{
	if (str[start] != str[end - 1])
		return (0);
	if (start >= end)
		return (1);
	return (is_palindrome_recursive(str, start + 1, end - 1));
}
