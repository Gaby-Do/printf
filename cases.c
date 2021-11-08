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

	c = malloc((sizeof(char) + 1)); /**pide memoria para c*/
	if (c == NULL) /**verifica que se le dio memoria*/
		return (1);
	c[0] = va_arg(argum, int); /**ponemos el character*/
	c[1] = '\0';
	print_len = paste(buff, c, print_len);/**call paste para que pegue la cadena*/
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
	char *aux;
	int s_len;

	aux = va_arg(argum, char *); /** paso todo a aux*/
	s_len = _strlen(aux);	/**mido tamaño de aux*/
	s = malloc((sizeof(char) * s_len) + 1); /**pido memoria para que todo entre en s*/
	if (s == NULL)		/**compruebo que se dio memoria*/
		return (1);
	_strcpy(s, aux);	/**copio lo de aux en s*/
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
	char *c;

	c = malloc((sizeof(char) + 1)); /**pide memoria para c*/
	if (c == NULL)
		return (1);	/**verifica que se le dio memoria*/
	c[0] = '%'; /**ponemos el character*/
	c[1] = '\0';
	print_len = paste(buff, c, print_len);/**call paste para que pegue la cadena*/
	free(c);
	return (print_len);
}
