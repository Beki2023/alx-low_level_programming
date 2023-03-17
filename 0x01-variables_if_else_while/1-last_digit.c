#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - no argument
 * print the last digit of the given random number
 *
 * Return: zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;

	if (last_num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (last_num < 6 && last_num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	else
		 printf("Last digit of %d is %d and is 0\n", n, i);


	return (0);
}
