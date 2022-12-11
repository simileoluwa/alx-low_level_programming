#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: this returns 0 by default
 */
int main(void)
{
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);

	putchar('\n');

	return (0);
}
