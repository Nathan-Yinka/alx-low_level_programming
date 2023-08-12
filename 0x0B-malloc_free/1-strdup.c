#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
		char *new_str;
		int length = 0, index = 0;

		if (str == NULL)
			return (NULL);

		while (str[length] != '\0')
			length++;

		new_str = malloc(sizeof(char) * (length + 1));

		if (new_str == NULL)
			return (NULL);

		for (index = 0; str[index]; index++)
			new_str[index] = str[index];

		return (new_str);
}
