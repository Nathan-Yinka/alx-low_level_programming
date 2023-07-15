#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, q;

	for (p = 0; p < 9; p++)
	{
		for (q = p + 1; q <= 9; q++)
		{
			putchar((p % 10) + '0');
			putchar((q % 10) + '0');

			if (p != 8 || q != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

