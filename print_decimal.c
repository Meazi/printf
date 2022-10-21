#include "main.h"
/**
 * print_decimal - print decimal and int
 * @arg: first member
 * Return: length of output
 */

int print_decimal(va_list arg)
{
	unsigned int i, j, k;

	int n = va_arg(arg, int), len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = 1;
	k = i;
	while (k > 9)
	{
		j *= 10;
		k /= 10;
	}
	for (; j >= 1; j /= 10)
	{
		len += _putchar(((i / j) % 10) + '0');
	}
	return (len);
}
