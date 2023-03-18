#include <stdio.h>

/**
 * main - no argument
 * print the the all lowercase exept e and q
 *
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
		putchar(i);
	else
	putchar(0);
	}
	return (0);
}
