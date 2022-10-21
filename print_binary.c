#include "main.h"
/**
 * print_binary - convert decimal(base 10) to binary(base 2)
 * @p: argument pointer
 * Return: length of bin
 */
int print_binary(va_list p)
{
	unsigned int n = va_arg(p, int), binary[1024];
	int i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
return (i);
}
