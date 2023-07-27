#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalize_next = 1; /* Start with the first character capitalized */

	while (str[index])
	{
		if (capitalize_next && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32; /* Convert lowercase to uppercase */
			capitalize_next = 0; /* Set to 0 after capitalizing the letter */
		}

		/* Set capitalize_next to 1 if the character is a delimiter */
		if (
			str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
			str[index] == ',' || str[index] == ';' || str[index] == '.' ||
			str[index] == '!' || str[index] == '?' || str[index] == '"' ||
			str[index] == '(' || str[index] == ')' || str[index] == '{' ||
			str[index] == '}'
		)
		{
			capitalize_next = 1;
		}

		index++;
	}

	return (str);
}
