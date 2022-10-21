#include "main.h"
/**
  * print_Rot - rot13 encoded string
  * @p: argument pointer
  * Return: len
  */
int print_Rot(va_list p)
{
	int i = 0, j = 0, len = 0, flag = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(p, char*);
	
	if (!s)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				len += _putchar(b[j]);
				flag = 1;
			}
		}
		if (!flag)
		{
			len += _putchar(s[i]);
		}
	}
	return (len);
}
