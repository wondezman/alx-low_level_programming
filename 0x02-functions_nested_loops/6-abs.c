#include "main.h"

/**
 *_abs - Compute the absolute value of an integer
 *@n: n is an intiger
 *
 *Return: n for all integers
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
