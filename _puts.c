#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Description: a putchar inorder to print a char function
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
