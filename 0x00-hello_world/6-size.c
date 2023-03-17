#include <stdio.h>

/**
 * main- no argument
 * declaretion of variables
 * print the size of different variable type
 *
 * return: zero
 */

int main(void)
{
	char b;
	int e;
	long int r;
	long long int k;
	float t;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Sixe of a float: %lu byte(s)\n", (unsigned long)sizeof(t));

	return (0);
}
