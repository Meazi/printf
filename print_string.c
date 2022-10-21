#include "main.h"
/**
 * print_string - writes c to standard output
 * @p: argument pointer
 * Return: 1
 */
int print_string(va_list p)
{
	char *my_str;
	int i = 0;

	my_str = va_arg(p, char*);

	if (my_str == NULL)
	{
		my_str = "(null)";
	}

	while (my_str[i] != '\0')
	{
		_putchar(my_str[i]);
		i++;
	}
	return (i);
}
