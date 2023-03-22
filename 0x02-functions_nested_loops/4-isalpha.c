#include "main.h"
/**
 * _isalpha - check for the alphabetic character
 * @c: the variable to be checked
 *
 * Return: 1 for letter or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

