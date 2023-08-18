#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line at all case.
 * @separator: separte the numbers from eachh other
 * @n: The number of integers to be passed in the fun ction
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int counter;

	va_start(nums, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(nums, int));

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
