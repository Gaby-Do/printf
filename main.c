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
    int c;

 _printf("Let's try to printf a simple sentence.\n");
    printf("LLLLLet's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
   c =  _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   _printf("string:[asdasda%s]\n", "I am a string !"); /**%s al final*/
   printf("stringg:[asadasa%s]\n", "I am a string !");
   _printf("String:[holaa%sholaa]\n", "I am a string !"); /** %s en el medio*/
   printf("String:[holaa%sholaa]\n", "I am a string !");
  _printf("sdfghgfd[%s,hhgfdrtyh %c]\n", "I am a string", 'W');
  printf("sdfghgfd[%s,hhgfdrtyh %c]\n", "I am a string", 'W');
  _printf("tengo doble porcentaje [%s] [%%]\n", "I am a string", 'W');
  printf("tengo doble porcentaje [%%]\n");
  _printf("hola no me reconocen [%e]\n");
  return (c);
}
