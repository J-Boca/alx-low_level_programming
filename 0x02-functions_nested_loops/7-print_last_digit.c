#include "main.h"

/**
 * print_last_digit - ints the last digit of a number
 *
 * @n: input number as an integer
 *
 * Return: (0) sucess
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	n = -n;
	_putchar (n + '0');
return (n);
}
