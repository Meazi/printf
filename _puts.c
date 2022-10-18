#include "main.h"
#include <stdio.h>
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
