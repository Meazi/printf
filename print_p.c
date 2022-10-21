#include "main.h"

/**
 * print_ptr - convert and print an unsigned long int in hexadecimal
 * @ptr: the address of the pointer to print
 * @count: number of bytes printed
 * Return: void
 */

void print_ptr(unsigned long ptr, int *count)
{
	int x;

	if (ptr > 15)
		print_ptr(ptr >> 4, count);

	if (*count == -1)
		return;

	if ((ptr & 15) < 10)
		x = _putchar('0' + (ptr & 15));
	else
		x = _putchar('a' + (ptr & 15) % 10);

	if (x == -1)
		*count = -1;
	else
		*count += x;
}

/**
 * print_p - prints a pointer address in lowercase hexadecimal format
 * @p: argument pointer
 *
 * Return: the number of bytes printed
 */
int print_p(va_list p)
{
	int count = 0;
	void *ptr = va_arg(p, void *);

	if (!ptr)
		return (_printf("(nil)"));

	count = _printf("0x");

	if (count == -1)
		return (count);

	print_ptr((unsigned long) ptr, &count);

	return (count);
}
