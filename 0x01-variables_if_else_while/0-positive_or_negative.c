#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print random number and state if is positive,negetive or zero.
 *
 * Return: (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else
		print("%d is zero"n);
	return (0);
}
