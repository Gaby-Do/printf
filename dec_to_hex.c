#include "main.h"
/**
 * int_to_bi - converts from integer to binary
 * @argum: number received to convert
 * @buff: buffer
 * @print_len: size of buff
 * Return: int
 */
int dec_to_X(va_list argum, char *buff, int print_len)
{
	long int n; x = 0;
	int i = 0;
	char *s;

	n = va_arg(argum, int);
	s = malloc(sizeof(char) * 15);
	if (!s)
		return (1);
	while (n !=  0)
	{
		x = n % 16;
		if (x < 10)
			s[i] = x + 48;
		else
			s[i] = x + 55;
		n = n / 16;
		i++;
	}
	s[i] = '\0';
	*s = rev_string(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
/**
    3  * int_to_bi - converts from integer to binary
    4  * @argum: number received to convert
    5  * @buff: buffer
    6  * @print_len: size of buff
    7  * Return: int
    8  */
--  9 
int dec_to_X(va_list argum, char *buff, int print_len)
{
	long int n; x = 0;
	int i = 0;
	char *s;

	n = va_arg(argum, int);
	s = malloc(sizeof(char) * 15);
	if (!s)
		return (1);
	while (n !=  0)
	{
		x = n % 16;
		if (x < 10)
			s[i] = x + 48;
		else
			s[i] = x + 55;
		n = n / 16;
		i++;
	}
	s[i] = '\0';
	*s = rev_string(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
