#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string on a standard screen
 * @name: parameter passed from _printf
 * Return: 1 if successful and -1 if not
 */
int _puts(const char *name)
{
	if (name == NULL)
		return (-1);

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	return (1);
}
