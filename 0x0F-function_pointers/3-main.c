#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point of the program. Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int value1, value2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(argv[1]);
	operator = argv[2];
	value2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && value2 == 0) ||
	    (*operator == '%' && value2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(value1, value2));

	return (0);
}
