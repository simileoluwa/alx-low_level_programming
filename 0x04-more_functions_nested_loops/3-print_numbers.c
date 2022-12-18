#include "main.h"

/**
 * print_numbers - prints digits 0 to 9
 * main - checks for printed values
 * Returns: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
