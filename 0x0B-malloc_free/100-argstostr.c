#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to concatenated string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
	}
	length += ac;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
