#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10x
 *
 * Return: Always zero
 */

void print_alphabet_x10(void)
{
	char c;
	int j = 0;

	while (j  < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar("\n");
		j++;
	}
}
