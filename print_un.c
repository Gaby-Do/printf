#include "main.h"
/**
* print_un - receive argument, converts it to string, send it to buffer
* @argum: argument to be worked with
* @buff: buffer where we send the string, our final location before printing
* @print_len: the lenght of our string
* Return: int, lenght of string
*/
int print_un(va_list argum, char *buff, int print_len)
{
	unsigned int num = va_arg(argum, int), num2 = num;
	int count = 0, i;
	char *s;

	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	s = malloc(count + 1);
	if (!s)
		return (-1);
	for (i = count; i >= 0; i--)
	{
		s[i] = (num2 % 10 + '0');
		num2 = num2 / 10;
	}
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
