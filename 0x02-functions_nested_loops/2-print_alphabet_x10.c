#include "main.h"

/**
 * print_alphabet_x10 - print lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j = o;
	char c = 'a';

	while (j  < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar("\n");
		j++;
	}
}
