#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * Function that prints last digit 
 * @n: takes in an integer
 *
 * Return: result output
 */
int print_last_didgit(int n)
{
int ln = n % 10;

if (n < 0)
ln = ln* - 1;
_putchar(ln + '0');
return (ln);
}
