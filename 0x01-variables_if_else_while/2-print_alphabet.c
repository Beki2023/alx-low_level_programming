#include <stdio.h>

/**
 * main - no argument
 * print the last digit of the given random number
 *
 * Return: zero
 */

int main(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		i = tolowe(i);
		putchar(i);
	}

	return (0);
}
