#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 *
 * checks for lower case character
 * Return: 1 if int c is lowercase and , 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
