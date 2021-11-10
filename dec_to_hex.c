#include "main.h"
/**
 * dec_to_x - converts from decimal to hexa
 * @argum: number received to convert
 * @buff: buffer
 * @print_len: size of buff
 * Return: int
 */
int dec_to_x(va_list argum, char *buff, int print_len)
{
	long int n, x = 0;
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
			s[i] = x + 87;
		n = n / 16;
		i++;
	}
	s[i] = '\0';
	*s = rev_str(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
/**
* dec_to_HEX - converts from decimal to HEXA (caps)
* @argum: number received to convert
* @buff: buffer
* @print_len: lenght of buff to be writen
* Return: int
*/
int dec_to_HEX(va_list argum, char *buff, int print_len)
{
	long int n, x = 0;
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
	*s = rev_str(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
