#include "main.h"
#include "stdarg.h"
/**
 * print_all - prints the final string
 * Description: once we have the final string to be printed, we call print_all
 * @toprint: pointer
 * @largo: lenght to be printed
 * Return: int
 */
int print_all(char *toprint, int largo)
{
	write(1, toprint, largo);
	_putchar(10);
	return (largo);
}
/**
 * _printf - printf
 * Description: printf
 * @format: pointer
 * Return: number of charaters printed
 */
int _printf(const char *format, ...)
{
	int a = 0;
	int count = 0;
	char *dest;

	while (format && format[a] != '\0')
	{
		a++;
		count++;
	}
	dest = malloc(count);
	if (!dest)
		return (-1);
	a = 0;
	while (a < count)
	{
		dest[a] = format[a];
		a++;
	}
	print_all(dest, count);
	free(dest);
	return (0);
}
