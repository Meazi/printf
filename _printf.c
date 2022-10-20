#include "main.h"

/**
 * _printf - function prints output on screen
 * @format: pointer to the first part of printf
 *
 * Description: this is _printf function that contains char and argc
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar(*p);
				continue;
			}
			while (get_flag(*p, &flags))
			{
				p++;
			}
			pfunc = get_print_func(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
		{
			count += _putchar(*p);
		}
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
