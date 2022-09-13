#include "main.h"

/**
 * main - Entry point
 *
 * Discription: function that prints the alphabet, in lowercas.
 *
 * Return: (0) sucess
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
