#include <stdio.h>
/*betty style doc */
/**
 * main - Entry point for the program
 *
 * Return: this is value 0 by default
 */
int main(void)
{
	int s;

	for (s = 97; s <= 122; s++)
		putchar(s);

	for (s = 65; s <= 90; s++)
		putchar(s);

	putchar(10);

	return (0);
}
