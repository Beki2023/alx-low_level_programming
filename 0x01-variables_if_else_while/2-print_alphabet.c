#include <stdio.h>

/**
 * main - no argument
 * print the the all lowercase alphabet using putchar
 *
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
