#include "main.h"

/**
 * int _isalpha - input is a letter, lowercase or uppercase 1, otherwise 0.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letter, lowercase or uppercase, 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}

	else
{
	return (0);
}
_putchar('\n');
}
