#include <stdio.h>
/**
 * main - no argument
 * print the lower case alphabet in reverse order
 *
 * return: zero
 */

int mian(void)
{
	int i;
	
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	return (0);
}
