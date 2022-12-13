#include "main.h"
/**
* print_alphabet - this is the entry point of the program
* Description: this function prints the alphabets in lowercase
*/

void print_alphabet(void)
{
	int lines;

	for (lines = 'a'; lines <= 'z'; lines++)
	{
		_putchar(alphabet);
		if (alphabet == 'z')
		{
			_putchar('\n');
		}
	}
}
