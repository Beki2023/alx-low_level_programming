#include "main.h"
/**
 * print_sign - print a sign of a number
 * @n: is the variable
 *
 * Return: 1 for n is greater than zero or 0 for zero or -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

