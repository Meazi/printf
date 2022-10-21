#include "main.h"
/**
 * print_o - octal format printer
 * @p: argument pointer
 * Return: length of string
 */
int print_o(va_list p)
{
	unsigned int oct = va_arg(p, int), buff[1000];
	int  c = 0, i;

	if (oct == 0)
	{
		_putchar('0');
		return (1);
	}

	while (oct > 0)
	{
		buff[c] = oct % 8;
		oct /= 8;
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (c);
}
