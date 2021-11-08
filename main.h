#ifndef _HEADER_
#define _HEADER_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *printgm - Struct - list to validates printing formats
 *@type: possible formats
 *@f: function associated at specified format
 */
typedef struct printgm
{
	    char *type;
	    int (*f)(va_list n, char *buff, int print_len);
}printgm_t;

int _printf(char *format, ...);
int print_char(va_list, char *, int);
int print_str(va_list, char *, int);
int print_porc(va_list, char *, int);
int _strlen(char *s);
int (*struct_funct(char *arg))(va_list, char *, int);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int paste(char *buffer, char* s, int print_len);
int main(void);
int un_known(char *s, char *buff, int print_len);
#endif
