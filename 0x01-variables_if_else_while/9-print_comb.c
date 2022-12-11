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

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
