#include "main.h"

/**
 * largest_number - return largest of 3 numbers
 * @a:integer no one
 * @b:integer no two
 * @c:integer no three
 *
 * Return:(0) sucess
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
{
	largest = a;
}
	else if (b  >= a && b >= c)
{
	largest = b;
}
	else
{
	largest = c;
}
	return (largest);
}
