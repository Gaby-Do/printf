#include "main.h"
/**
* print_d - receive argument, converts it to strin, send it to buffer
* @argum: argument to be worked with
* @buff: buffer where we send the string, our final location before printing
* @print_len: the lenght of our string
* Return: int, lenght of string
*/
int print_d(va_list argum, char *buff, int print_len)
{
	int count = 0, i, flag = 0, num2, num = va_arg(argum, int);
	char *s;

	if (num < 0)
	{
		num = -num;
		flag = 1;
	}
	num2 = num;
	while (num > 10)
	{
		num = num / 10;
		count++;
	}
	if (flag == 1)
		s = malloc(count + 2);
	else
		s = malloc(count + 1);
	if (!s)
		return (-1);
	if (flag == 1)
	{
		for (i = (count + 1); i >= 0; i--)
		{
			s[i] = (num2 % 10 + '0');
			num2 = num2 / 10;
		}
		s[0] = '-';
	}
	else
	{
		for (i = count; i >= 0; i--)
		{
			s[i] = (num2 % 10 + '0');
			num2 = num2 / 10;
		}
	}
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
