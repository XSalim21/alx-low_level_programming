#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Function that prints the 9 times table, starting with 0
 * ro = row, co = column, d = digits of current results
 * Return: Time table
 * Add extra space past single digit
 */
void times_table(void)
{
int ro, co, d;

for (ro = 0; ro <= 9; ro++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (co = 1; co <= 9; co++)
{
d = (co * ro);
if ((d / 10) > 0)
{
_putchar((d / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((d % 10) + '0');

if (co < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}
