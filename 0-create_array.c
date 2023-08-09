#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of specified size and assign char c
 * @size: Size of array
 * @c: Char to assign
 *
 * Description: This function dynamically allocates an array
 * and assigns each element the provided character.
 *
 * Return: Pointer to the allocated and initialized array.
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	result = malloc(sizeof(char) * size);
	if (size == 0 || result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = c;

	return (result);
}
