#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		if (i == 9)
		putchar(i + '0');
		else
		{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		}
	return (0);
}
