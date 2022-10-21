#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format specifier
 * Return: length of output
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, len = 0;

	va_start(ap, format);

	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (; (format && format[i]); i++)
	if (format[i] == '%')
		len += spec(&i, format, ap);
	else
		len += _putchar(format[i]);
		va_end(ap);
	return (len);
}
