#include <stdio.h>

/**
 *
 * main - prints all alphabets in lowercase except q and e
 *
 * Return: (0) sucess
 */
int main(void) 
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
