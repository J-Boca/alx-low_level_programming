#include "main.h"

/**
 * print_sign - if the input is greater,equal or less than z.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero,zero is 0, is less than zero -1.
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar (43);
	return (1);
}
	else if (n < 0)
{
	_putchar (45);
	return (-1);
}
else
{
	_putchar (48);
	return (0);
}
_putchar ('\n');
}

