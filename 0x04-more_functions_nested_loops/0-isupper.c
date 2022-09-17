#include "main.h"
#include <stdio.h>

/**
 * *_isupper -checks for the uppercase
 * @c: character being tested
 * Return: Always o
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
