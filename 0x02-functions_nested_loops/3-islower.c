#include "main.h"

/**
 * _isalpha - check for alphabets
 * Return: 0 0r 1
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
		return (1);
	else
		return (0);
}
