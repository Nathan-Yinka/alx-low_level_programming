#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min_val: minimum range of values stored
 * @max_val: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min_val, int max_val)
{
	int *result;
	int i, array_size;

	if (min_val > max_val)
		return (NULL);

	array_size = max_val - min_val + 1;

	result = malloc(sizeof(int) * array_size);

	if (result == NULL)
		return (NULL);

	for (i = 0; min_val <= max_val; i++)
		result[i] = min_val++;

	return (result);
}
