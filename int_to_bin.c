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
 * int_to_bi - converts from integer to binary
 * @argum: number received to convert
 * @buff: buffer
 * @print_len: size of buff
 * Return: int
 */
int int_to_bi(va_list argum, char *buff, int print_len)
{
	long int n;
	int i = 0;
	char *s;

	n = va_arg(argum, int);
	s = malloc(sizeof(char) * 15);
	if (!s)
		return (1);
	while (n / 2 > 0)
	{
		s[i] = n % 2 + '0';
		n = n / 2;
		i++;
	}
	s[i] = n % 2 + '0';
	i++;
	s[i] = '\0';
	*s = rev_string(s);
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
