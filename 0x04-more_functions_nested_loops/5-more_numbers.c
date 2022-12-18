#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int num;
	int check;

	for (check = 0; check < 10; check++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num % 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar(10);
	}
}
