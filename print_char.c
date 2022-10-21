#include "main.h"
/**
 * print_char - prints char
 * @p: argument pointer
 * Return: 1 success
 */
int print_char(va_list p)
{
	int ch = (char)va_arg(p, int);

	_putchar(ch);

	return (1);
}
