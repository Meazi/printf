#include "main.h"
/**
 * spec - matches fmt specifier with prototype(fn)
 * @i: element
 * @format: string from printf
 * @ap: list of args
 * Return: output length to stdout
 */
int spec(int *i, const char *format, va_list ap)
{
	int len = 0, k = *i, l = 0, m = 0;

	mark_t spc[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pct},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", print_binary},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_Xu},
		{"S", print_S},
		{"R", print_Rot},
		{"r", print_reverse},
		{"p", print_p},
		{NULL, NULL},
	};
	int size = sizeof(spc) / sizeof(mark_t) - 1;

	while (l < size)
	{
		if (*(spc[l].sc) == format[k + 1])
		{
			len += spc[l].f(ap);
			*i += 1;
		}
		else
		{
			m++;
		}
		l++;
	}
	if (m == size)
	{
		len += _putchar(format[k]);
	}
	return (len);
}
