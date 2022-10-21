#include "main.h"

/**
 * print_x - convert decimal to hexadecimal in lowercase
 * @p: argument pointer
 * Return: the length of output
 */
int print_x(va_list p)
{
	unsigned int v_step = va_arg(p, int), v_temp = 0;
	char vc_hex_temp[1024];
	int i = 0, count = 0;

	if (v_step == 0)
	{
		_putchar('0');
		count = 1;
	}
	else
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
			vc_hex_temp[i] = v_temp + 87;
			i++;
		}
		v_step /= 16;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		count += _putchar(vc_hex_temp[i]);
	}
	return (count);
}
