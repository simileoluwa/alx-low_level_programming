#include <stdio.h>
/** 
 * main - Entry point
 *
 * Return: this returns 0 by default
 */
int main(void)
{
	int i;
	int j;
	int sm;

	for (sm = 48; sm <= 55; sm++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (j = 50; j <= 57; j++)
			{
				if(j > i && i > sm)
				{
					putchar(sm);
					putchar(i);
					putchar(j);

					if (i <= 56 && j <= 57 && sm < 55)
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
