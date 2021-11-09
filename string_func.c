#include "main.h"

/**
 *_strlen - returns the long of a string.
 *@s: Pointer to string
 *Return: Long of the string
 */

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 *_strcpy - copy string from src
 *@dest: Pointer to dest
 *@src: Pointer origen
 *Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
/**
 *
 *
 */
char int_to_str(int n)
{
	int count = 0;
	int num = n;
	int i;
	char *s;

	while (num > 10)
	{
		num = num / 10;
		count++;
	}
	s = malloc(count + 1);
	if (!s)
		return (-1);
	for (i = (count - 1); i >= 0; i--)
	{
		s[i] = (num % 10 + '0');
		num = num / 10;
	}
	return (0);
}
