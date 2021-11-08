#include "main.h"
/**
*struct_funct - match s with struct y devuelve la funcion a utliziar
*@s: no sasbes aun
*Return: pointer to fuction
*/
int (*struct_funct(char *s))(va_list, char *, int)
{
	printgm_t frmt[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_porc},
		{NULL, NULL}
	};
	int i = 0;

	while (frmt[i].type)
	{
		if (*s == *(frmt[i]).type)/** machea lo recibido con el struct*/
		{
			return (frmt[i].f); /**retorna la funcion que se debee utilizar*/
		}
		i++;
	}
	return (0);
}
