#include "main.h"

/**
 * print_S - conversion specifier S
 * 
 * Description: print non-printable characters
 * (0 < ASCII value < 32 or >= 127)
 * /x followed by ASCII code in hex
 * 
 * @p: argument pointer
 * Return: length of the string
*/

int print_S(va_list p)
{
    int i = 0, c = 0;
    char *ptr_str = va_arg(p, char*);

    if (ptr_str == NULL)
        return (write(1, "(null)", 6));
    while (ptr_str[i] != '\0')
    {
        if (ptr_str[i] >= 32 && ptr_str[i] < 127)
            c += _putchar(ptr_str[i]);
        else
        {
            c += auxS_hex(ptr_str[i]);
        }
        i++;
    }
    return (c);
}
