#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - checks if a string contains only digits
 * @str: input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Sums all the numbers passed as command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			int num = atoi(argv[count]);

			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
