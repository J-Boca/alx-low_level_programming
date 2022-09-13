#include "main.h"

/**
 * _islower - show 1 if the imput is a lowercase,otherwise return 0
 *
 * @c:The character in ASCII code
 *
 * Return: 1 lower character, o for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
_putchar('\n');
}
