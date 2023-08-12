#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int index1, index2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	index1 = index2 = 0;
	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
		index2++;

	result = malloc(sizeof(char) * (index1 + index2 + 1));

	if (result == NULL)
		return (NULL);

	index1 = index2 = 0;
	while (s1[index1] != '\0')
	{
		result[index1] = s1[index1];
		index1++;
	}

	while (s2[index2] != '\0')
	{
		result[index1] = s2[index2];
		index1++, index2++;
	}
	result[index1] = '\0';
	return (result);
}
