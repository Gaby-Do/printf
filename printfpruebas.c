#include <unistd.h>
#include <stdio.h>
#include <limits.h>
void main(void)
{
	char *x = "hola";
	int a = 10;
	int b = 8;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	printf("el numero es %d%d\n", a, b);
	printf("el numero es %d %d\n", a, b);
	printf("el numero es %do%d\n", a, b);
	printf("el numero es %d,%d\n", a, b);
	printf("%u\n", ui);
	write(1, x, 3);
}
