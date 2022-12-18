#include "main.h"

/**
 * print_diagonal - prints diagonal based on user input
 * @n: user input
 */

void print_diagonal(int n)
{
	int check;
	int gap;

	if (n <= 0)
	{
		_putchar(10);

		return;
	}

	for (check = 0; check < n; check++)
	{
		gap = 0;

		while (gap < check)
		{
			_putchar(' ');
			gap++;
		}

		_putchar('\\');
		_putchar(10);
	}
}
