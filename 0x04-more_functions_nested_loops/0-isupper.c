#include "main.h"

/**
 * _isupper - will check for uppercase
 * @c: this is the parameter used
 * Return: 0 (successful)
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
