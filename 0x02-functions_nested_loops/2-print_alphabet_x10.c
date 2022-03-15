#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
