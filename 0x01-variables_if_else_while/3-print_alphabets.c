#include <stdio.h>

/**
 * main - no argument
 * print the the all lowercase alphabet using putchar
 *
 * Return: zero
 */

int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
