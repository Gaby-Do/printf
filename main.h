#ifndef _HEADER_
#define _HEADER_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *struct op - Struct op
 *@vari: :DDDDDDD
 *@f: The function associated
 */
typedef struct printgm
{
	    char type;
	    int (*f)(va_list);
}printgm_t;

int _printf(const char *format, ...);
int print_all(char *toprint, int largo);
int _strlen(char *s);

#endif
