#include "main.h"
/**
 * print_sign - returns 0 letter not lc, 1 letter lc
 *
 * @n: number to check and confirm
 * Return: zero or one
 */

int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}
