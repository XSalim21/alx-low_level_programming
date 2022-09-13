#include "main.h"
/**
 * Function that checks for alphabetical characters
 *
 * Return: 1 if c is a letter(upper or lower), 0 otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
