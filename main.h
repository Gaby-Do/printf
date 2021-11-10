#ifndef _HEADER_
#define _HEADER_
#define BUFFER_SIZE 1024

#include <limits.h>
#include <float.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *struct printgm - Struct - list to validates printing formats
 *@type: possible formats
 *@f: function associated at specified format
 */
typedef struct printgm
{
	    char *type;
	    int (*f)(va_list n, char *buff, int print_len);
} printgm_t;

int dec_to_oct(va_list argum, char *buff, int print_len);
int print_un(va_list argum, char *buff, int print_len);
char rev_str(char *s);
int dec_to_HEX(va_list argum, char *buff, int print_len);
int dec_to_x(va_list argum, char *buff, int print_len);
int int_to_bi(va_list, char *, int);
int _printf(char *format, ...);
int print_char(va_list, char *, int);
int print_str(va_list, char *, int);
int print_porc(va_list, char *, int);
int print_d(va_list, char *, int);
int _strlen(char *s);
int (*struct_funct(char *arg))(va_list, char *, int);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int paste(char *buffer, char *s, int print_len);
int un_known(char *s, char *buff, int print_len);
#endif
