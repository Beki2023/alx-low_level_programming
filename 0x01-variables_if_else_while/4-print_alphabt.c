#include <stdio.h>

/**
 * main - starting point
 * write lowercase alphabet exept e and q
 *
 * return: zero(seccess)
 */

int main(void)
{
	int i;

	for (i = 'a'; i != 'e'; i != 'q'; i <= 'z'; i++)
		putchar(i);
	return (0);
}
