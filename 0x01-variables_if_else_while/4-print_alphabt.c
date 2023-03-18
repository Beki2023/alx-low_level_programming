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
	{
	if (i != 'e' && i != 'q')
	{
		putchar(i);
	}
	else
	{
	putchar(0);
	}}
	return (0);
}
