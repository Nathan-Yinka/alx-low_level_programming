#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int new_word_flag, counter, word_count;

	new_word_flag = 0;
	word_count = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == ' ')
			new_word_flag = 0;
		else if (new_word_flag == 0)
		{
			new_word_flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, idx = 0, len = 0, words, word_len = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_len)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (word_len + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[idx] = tmp - word_len;
				idx++;
				word_len = 0;
			}
		}
		else if (word_len++ == 0)
			start = i;
	}

	matrix[idx] = NULL;

	return (matrix);
}
