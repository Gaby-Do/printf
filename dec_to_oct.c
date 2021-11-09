#include "main.h"
/**
 * rev_string - reverses a string
 *
 * Description: reverses a string
 *
 * @s: pointer
 * Return: return a sting
 */
char rev_string(char *s)
{
	int l = 0;
	char aux;
	int start;
	int end;

	while (s[l] != '\0')
	{
		l++;
	}
	start = 0;
	end = l - 1;
	if (l > 0)
	{
		for (; start < l / 2;)
		{
			aux = s[start];
			s[start] = s[end];
			s[end] = aux;
			start++;
			end--;
		}
	}
	return (*s);
}


/**
 * dec_to_oct - converts from decimal to octal
 * @argum: number received to convert
 * @buff: buffer
 * @print_len: lenght of buff writen
 * Return: int
 */
int dec_to_oct(va_list argum, char *buff, int print_len)
{
	long int n;
	int i = 0;
	char *s;

	n = va_arg(argum, int);
	s = malloc(sizeof(char) * 15);
	if (!s)
		return (-1);
	if (n < 8)
		s[0] = n;
	else
	{
		while (n / 8 > 0)
		{
			s[i] = n % 8 + '0';
			n = n / 8;
			i++;
		}
		s[i] = n / 8 + '0';
		i++;
	}
	s[i] = '\0';
	*s = rev_string(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
