#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * rev_string - reverses a string
 *
 * Description: reverses a string
 *
 * @s: pointer
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
 * int_to_bin - converts from integer to binary
 * @num: number received to convert
 * Return: int
 */
int main(void)
{
	int n = 146;
	int i = 0;
	char *s;

	s = malloc(sizeof(char) * 15);
	if (!s)
		return (1);
	while (n / 10 > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	s[i] = n % 10 + '0';
	i++;
	s[i] = '\0';
	*s = rev_string(s);
	write(1, s, i);
	free(s);
	return (0);
}
