#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: this returns 0 by default
 */
int main(void)
{
	int i;
	int j;
	int dj;

	for (dj = 48; dj <= 55; dj++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (j = 50; j <= 57; j++)
			{

				if (j > i && i > dj)
				{
					putchar(dj);
					putchar(i);
					putchar(j);

					if (i < 56 && j <= 57 && dj < 55)
					{
						putchar(44);
						putchar(32);
					}
				}	
			}
		}
	}
	putchar(10);
	return (0);
}
