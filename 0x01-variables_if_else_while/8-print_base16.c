#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: this returns 0 by default
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
		putchar(k);

	for (k = 97; k <= 102; k++)
		putchar(k);

	putchar(10);

	return (0);
}
