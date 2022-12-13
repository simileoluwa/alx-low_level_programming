#include "main.h"
/**
 * _isalpha - REturn 1 if c is a letter. either lc or uc
 * @c: compares unsigned with ASCII value
 * Return: 0 is successful
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
