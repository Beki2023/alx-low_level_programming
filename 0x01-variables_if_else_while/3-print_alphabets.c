#include <stdio.h>

/**
 * main - starting point
 * print lowercas then uppercase in new line
 *
 * return: zero (seccess)
 */

int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	return (0);
}
