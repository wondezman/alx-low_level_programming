#include "main.h"

/**
 * print_alphabet - Print all alphabets in lowercase
 *
 *Return: void
 */

void print_alphabet(void)
{
	char lower_letter = 'a';

	while (lower_letter <= 'z')
	{
		_putchar(lower_letter);
		lower_letter++;
	}
	_putchar('\n');
}
