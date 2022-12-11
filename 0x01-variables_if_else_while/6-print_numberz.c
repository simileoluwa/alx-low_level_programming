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

	for (p = '0'; p <= '9'; p++)
		putchar(p);

	putchar('\n');

	return (0);
}
