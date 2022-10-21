#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


/**
 * struct mark - struct for format
 * @sc: 1st member
 * @f: 2nd member
 */
typedef struct mark
{
	char *sc;
	int (*f)(va_list p);
} mark_t;


int _printf(const char *format, ...);
int _putchar(char c);
int spec(int *i, const char *format, va_list ap);


/**
 * struct nc - non custom specifier(flag)
 * @sum: '+'
 * @empty: ' '
 * @hash: '#'
 */
typedef struct nc
{
	int sum;
	int empty;
	int hash;
} nc_t;

int print_char(va_list p);
int print_string(va_list p);
int print_pct(va_list __attribute__((unused)) p);
int print_decimal(va_list p);
int print_int(va_list p);
int print_binary(va_list p);
int print_u(va_list p);
int print_o(va_list p);
int print_x(va_list p);
int print_Xu(va_list p);
int print_S(va_list p);
int auxS_hex(int n);
int print_reverse(va_list p);
int print_Rot(va_list __attribute__((unused)) p);
int print_p(va_list p);

#endif /* _MAIN_H_ */
