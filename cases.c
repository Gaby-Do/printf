#include "main.h"

/**
 *print_char - function for c case
 * @argum: Character
 * @buff: buffer
 * @print_len: size of string que va subiendo
 * Return: size of strig finaly
 */

int print_char(va_list argum, char *buff, int print_len)
{
	char *c;

	if (!argum)
		return (0);
	c = malloc((sizeof(char) + 1)); /**pide memoria para c*/
	if (c == NULL) /**verifica que se le dio memoria*/
		return (-1);
	c[0] = va_arg(argum, int); /**ponemos el character*/
	c[1] = '\0';
	print_len = paste(buff, c, print_len);/**concatenates string*/
	free(c);
	return (print_len);
}

/**
 *print_str - function for s case
 *@argum: argumentos
 *@buff: buffer
 *@print_len: size of buff
 *Return: size of string finally
 */

int print_str(va_list argum, char *buff, int print_len)
{
	char *s;
	char *str_aux;
	int s_len;

	if (!argum)
		return (0);
	str_aux = va_arg(argum, char *); /** paso todo a aux*/
	s_len = _strlen(str_aux);	/**mido tamaño de aux*/
	s = malloc((sizeof(char) * s_len) + 1); /**request memory space for s*/
	if (s == NULL)		/*check if malloc ok*/
		return (-1);
	_strcpy(s, str_aux);	/**add str_aux into s*/
	print_len = paste(buff, s, print_len);
	free(s);
	return (print_len);
}
/**
*print_porc - prints % when %%
*@argum: unused in this case
*@buff: where we store the string
*@print_len: string lenght
*Return: string lenght
*/
int print_porc(__attribute__((unused)) va_list argum,
char *buff, int print_len)
{
	char *c = "%";

	print_len = paste(buff, c, print_len);/**send string to buffer*/
	return (print_len);
}
/**
 * un_known - send unknown char after % to buffer
 * @s: char after %
 * @buff: where we store the string
 * @print_len: string lenght
 * Return: print_len
 */
int un_known(char *s, char *buff, int print_len)
{
	print_len = paste(buff, s, print_len);/**send string to buffer*/
	return (print_len);
}
