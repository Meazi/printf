#include "main.h"
/**
 * print_reverse - prints string reversed
 * @p: argument pointer
 * Return: length of the output
 */
int print_reverse(va_list p)
{
	int l = 0, r = 0;
	char *s = va_arg(p, char*);

	if (!s)
	{
		s = "(null)";
	}
	while (s[l])
	l++;

	for (r = l - 1; r >= 0; r--)
	{
	_putchar(s[r]);
	}
return (l);
}
