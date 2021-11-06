#include "main.h"
/**
*
*
*/
int print_all(char *toprint, int largo) /**toprint es lo que viene desde formato, largo es cantidades de caracteres*/
{
	write(1, toprint, largo);
	putchar('\n');
	return (largo);
}
