#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always zero
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 9; i++)
{
	for (j = 1; j < 9; j++)
	{
		for (k = 2; k < 10; k++)
		{
			if (i < j && j < k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i + j + k) != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
