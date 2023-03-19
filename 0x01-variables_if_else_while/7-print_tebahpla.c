#include <stdio.h>

/**
 * main- starting point
 * print the lower case alphabet in reverse order
 *
 * return: zero
 */

int main(void)
{
	int i;
	
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	return (0);
}
