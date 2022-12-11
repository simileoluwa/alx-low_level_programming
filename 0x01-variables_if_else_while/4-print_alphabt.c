#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: this returns 0 by default
 */
int main(void)
{
	int p;

	for (p = 97; p <= 122; p++)
		if (p != 101 && p != 113)
			putchar(p);

	putchar(10);

	return (0);
}
