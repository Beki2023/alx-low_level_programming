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

	for (i ='a'; i <= 'z'; i++)
		while (!(i = 'e' || 'q'))
		putchar(i);
	return (0);
}
