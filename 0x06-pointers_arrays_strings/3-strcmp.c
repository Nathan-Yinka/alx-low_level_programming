#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Difference between the characters at the first different position
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
