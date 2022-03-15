#include "main.h"

/**
 *jack_bauer - Prints every minutes of the day of Jack Bauer
 *
 *Return: void
 */

void jack_bauer(void)
{
	int t, m;

	for (t = 0; t < 24; t++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(t / 10 + 48);
			_putchar(t % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}
}
