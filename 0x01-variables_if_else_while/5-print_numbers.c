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

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
