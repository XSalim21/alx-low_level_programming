#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * Function that prints last digit
 * @n: takes in an integer
 *
 * Return: result output
 */
int print_last_digit(int n)
{
int r;

r = n % 10;

if (r < 0)
{
r *= -1;
}
_putchar(r + '0');
return (r);
}
