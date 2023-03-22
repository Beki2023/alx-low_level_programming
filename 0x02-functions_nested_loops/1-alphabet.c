#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: always zero
 */

void print_alphabet(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
}
