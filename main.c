#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("op - Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("op - Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("op - Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("op - Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("op - Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("op - Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("op - String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("op - Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("op - Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("op - Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("op - Unknown:[%r]\n");
    return (0);
}
