#include "main.h"
/**
 *
 *
 *
 */
/**int print_str(va_list argum)
{
	char *p = va_arg(argum, char*);
	int a;

	if (!p)
	exit(-1);
	for (a = 0; p; p++, a++)
		;
*/	

int print_char(va_list argum)
{
	printf("enree");
	return (-8);
}
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list argum; /**argumentos variables de la función*/
	int a = 0;
	int b = 0;
	int count = 0;
	char *dest;

	printgm_t frmt[] = {
		{'c', print_char},
		{'\0', NULL},
	};

	va_start(argum, format);

	while (format && format[a] != '\0')/** recorremos format y pegamos en *dest y comparamos con frmt*/
	{
		a++;
		count++;
	}
	for (a = 0; a < count; a++)
	{
		if (format[a] == '%')
		{
			a++;
			while (frmt[b].type) 
			{
				if (format[a] == frmt[b].type)
					frmt[b].f(argum);/** llamar a funciona que corrobora si el %? es igual al contenido*/
					b++;
			}
		}
	}
	dest = malloc(count);
	if (!dest)
	{
		return (-1);
	}
	a = 0;
	while (a < count)
	{
		dest[a] = format[a];
		a++;
	}
	print_all(dest, count);
	free(dest);
	va_end(argum);
	return (0);
}
