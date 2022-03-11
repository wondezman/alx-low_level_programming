#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the main file of the projuct
 *Descrption: the program will be returns the positive and negative numbers
 *Return: 0 if it is sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	
	return (0);
}
