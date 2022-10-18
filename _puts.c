#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string on a standard screen
 * @name: parameter passed from _printf
 * Return: 1 if successful and -1 if not
 */
int _puts(const char *name)
{
	const char *cp_name = name;

	if (name == NULL)
		return (-1);

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	return (char_counter(cp_name));
}
/**
 * char_counter - counts characters
 * Return: number of character
 * @name: string passed from _puts
 */

int char_counter(const char *name)
{
	int count = 0;

	while (*name != '\0')
	{
		count++;
		name++;
	}
	return (count);
}
