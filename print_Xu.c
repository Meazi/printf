#include "main.h"

/**
 * print_Xu - convert decimal to unsigned hexadecimal in uppercase
 * @p: argument pointer
 * Return: the length of output, c (count)
 */
int print_Xu(va_list p)
{
	unsigned int v_step = va_arg(p, int), v_temp = 0;
	char vc_hex_temp[1024];
	int i = 0, c = 0;

	if (v_step == 0)
	{
		_putchar('0');
		c = 1;
	}
	while (v_step != 0)
	{
	v_temp = v_step % 16;
	if (v_temp < 10)
	{
	vc_hex_temp[i] = v_temp + 48;
	i++;
	}
	else
	{
		vc_hex_temp[i] = v_temp + 55;
		i++;
	}
	v_step /= 16;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		c += _putchar(vc_hex_temp[i]);
	}
	return (c);
}
