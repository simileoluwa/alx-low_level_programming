#include "main.h"
/**
 * _islower - confirms a character is lower case
 * and if YES it returns 1
 * otherwise returns 0 just like islower() function is ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * Return: 0 is successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
