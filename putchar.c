#include <unistd.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "hola y adios";
	char *p = str;
	int a;

	for (a = 0; *p != '\0'; p++, a++)
	;
	write(1, &str, a);
	write(1, &str, a);
	putchar('\n');
	return (a);
}
