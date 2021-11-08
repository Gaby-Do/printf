#include "main.h"
/**
 *_printf - function for printf project
 *@format: String to print
 *Return: larg of string finally
 */

int _printf(char *format, ...)
{
	int i = 0;
	size_t print_len = 0;
	va_list argum;
	char buffer[1024];
	int (*f)(va_list, char *, int);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))/**ve si format existe,*/
							/**o si solamente tiene un %*/
		return (-1);

	va_start(argum, format);
	while (format && format[i]) /**se mueve por format mientras exista*/
	{
		if (format[i] != '%') /**busca un %en format*/
		{
			buffer[print_len] = format[i]; /** pasa el string al bufer*/
			print_len += 1;
		}
		else /**cuando encuentra %*/
		{
			if (format[i + 1])
			{
				f = struct_funct(&(format[i + 1])); /**encuentra % y se fija el siguiente caracter */
				if (f != NULL)
				{
					print_len = f(argum, &buffer[print_len], print_len); /** encontro match y mando a buffer y aumenta longitud*/
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
	return (print_len);
}
