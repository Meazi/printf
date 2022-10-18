#include "main.h"
#include <stdarg.h>

/**
 * _printf - function prints output on screen
 * @format: pointer to the first part of printf
 * Return: 0
 */
int _printf(const char *format, ...)
{
	const char *character;
	int i;
	const char *s;
	va_list args;
	int count = 0;

	va_start(args, format);

	for (character = format; *character != '\0'; character++)
	{
		if (*character != '%')
		{
			_putchar(*character);
			count++;
		}
		else
		{
			character++;

			switch (*character)
			{
			case 'c':
				i = va_arg(args, int);
				   _putchar(i);
				   count++;
				break;
			case 's':
				s = va_arg(args, const char *);
				count = count + _puts(s);
				break;
			}
		}
	}
	return (count);
}
