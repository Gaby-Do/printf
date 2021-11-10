#include "main.h"

/**
 *paste - paste s string in buffer
 *@buffer: Destination of string
 *@s: String desde donde copia
 *@print_len: largo del string buffer que va aumentando
 *Return: largo final del string en el buffer
 */

int paste(char *buffer, char *s, int print_len)
{
	int i = 0, print_len2;

	if (print_len == 1024)
	{
		write(1, buffer, print_len);
		print_len2 = print_len;
		print_len = 0;

	}
	while (s && s[i]) /**mientras s exista pega el contenido en el buffer*/
	{
		buffer[i] = s[i];
		print_len += 1;
		i++;
	}
	return (print_len + print_len2);
}
