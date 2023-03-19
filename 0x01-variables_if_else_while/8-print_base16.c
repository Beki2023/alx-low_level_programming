#include <stdio.h>

/**
 * main - starting point
 *
 * base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	return (0);
}
