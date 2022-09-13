#include "main.h"
/**
 * Prints 10 times the alphabet followed by a new line
 * Return 10x a-z
 */
void print_alphabet_x10(void)
{
int n, c;

c = 0;

while (c < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
c++;
_putchar('\n');
}
}
