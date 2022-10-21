#include "main.h"

/**
 * auxS_hex - auxiliary to convert (S)
 * special ascii chars to hex code
 * 
 * @n: number to be converted to hex
 * Return: length
 */

int auxS_hex(int n)
{
    int c = 0, tmp = 0, i = 1;
    char hex[2] = {48, 48};

    tmp = n;
    while (tmp != 0)
    {
        if ((tmp % 16) < 10)
        {
            hex[i] = (tmp % 16) + 48;
            i--;
        }
        else
        {
            hex[i] = (tmp % 16) + 55;
            i--;
        }
        tmp /= 16;
    }

    c += write(1, "\\x", 2);
    c += _putchar(hex[0]);
    c += _putchar(hex[1]);

    return (c);
}
