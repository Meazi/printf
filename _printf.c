#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function prints output on screen
 * @format: pointer to the first part of printf
 * Return: 0
 */
int _printf(const char *format, ...)
{
	const char *character;
	va_list args;
	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (character = format; *character != '\0'; character++)
	{
		if (*character != '%')
		{
			_putchar(*character);
			if (*character != '\0')
				count++;
		}
		else
		{
			character++;
			switch (*character)
			{
			case 'c':
				_putchar(va_arg(args, int));
				count++;
				break;
			case 's':
				count = count + _puts(va_arg(args, const char *));
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			}
		}
	}
	va_end(args);
	return (count);
}
