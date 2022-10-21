#include "main.h"

/**
 * print_u - prints unsigned integer
 * @arg: argument pointer.
 * Return: 0
 */
int print_u(va_list arg)
{
	unsigned int i, p = 1, r;
	unsigned int n = va_arg(arg, int), len = 0;

	i = n;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		len += _putchar(((i / p) % 10) + '0');

	}
	return (len);
}
