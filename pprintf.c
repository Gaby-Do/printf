#include "main.h"
/**
 *_printf - function for printf project
 *@format: String to print
 *Return: number of characters printed
 */
int _printf(char *format, ...)
{
	int i = 0, (*f)(va_list, char *, int), veces = 0, print_len2 = 0;
	size_t print_len = 0;
	va_list argum;
	char buffer[1024];

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);/**check for format and if it´s only %*/
	va_start(argum, format);
	while (format && format[i]) /**recorre format mientras exista*/
	{
		if (print_len == 1024)
		{
			veces++;
			write(1, buffer, print_len);
			print_len2 = 1024;
			print_len = 0;
		}
		if (format[i] != '%') /**busca % en format*/
		{
			buffer[print_len] = format[i]; /** pasa el string al bufer*/
			print_len += 1;
		}
		else /**when %*/
		{
			if (format[i] == '%' && format[i + 1] == '\0')
			{
				write(1, buffer, print_len);
				return (-1);
			}
			if (format[i + 1]) /**when % looks at next char*/
			{
				f = struct_funct(&(format[i + 1]));
				if (f != NULL)/** found match, sent to buffer, lenght++*/
				{
					print_len = f(argum, &buffer[print_len], print_len);
					i++;
				}
				if (f == NULL)/*if % but no match for next char*/
				{
					print_len = print_porc(argum, &buffer[print_len], print_len);
					un_known(&format[i + 1], &buffer[print_len], print_len);
				}
			}
		}
		i++;
	}
	write(1, buffer, print_len);
	va_end(argum);
	return (print_len + (print_len2 * veces));
}
