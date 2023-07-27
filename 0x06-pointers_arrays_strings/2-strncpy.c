#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Number of characters to be copied from source
 *
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
