# Printf

## Introduction to the project

The functions _printf produce output according to a format and writes output to stdout.

The functions writes the output under the control of a format string that specifies how subsequent arguments.


## Environment

 - Lenguage: C
 - OS: Ubuntu 20.04 LTS
 - VIM - Vi IMproved 8.1
 - Compiler: gcc 9.3.0
 - Code for compile: Wall -Werror -Wextra -pedantic -std=gnu89
 
##  Specifitacation for proyect

- Prototype:  int _printf(const char *format, ...);
- No more than 5 functions per file.
- All files end with a new line.

## Specifier character

Specificier |     Output
--------------------------------
     b      | Binary convertion
--------------------------------
     d      | Signed integer
--------------------------------
     i      | Signed integer
--------------------------------
     c      |     Character
--------------------------------
     o      | Octal convertion
--------------------------------
     u      |Unsigned convertion
--------------------------------
     r      |  String reverse
--------------------------------
     R      | Rot13 traslation
--------------------------------
     s      |      String
--------------------------------
     %      |         %
--------------------------------

## Repository files

-main.h | Include prtotypes and structures used.
-pprintf | Main function where it traverses the format in search of %.
-struct_func | Machea with scpecific character and call the corresponding function.
-string_func | Contains functions that will be used within other functions, such as strlen and strcpy.
-paste | Insert strings into the buffer.
-int_to_bin | Converts an integer to a string.
-print_un | Coverts a unsigned.
-fun_nbr | Converts a digit to a string.
-fun_char | Contains four functions for different special characters, like %s, %%,%c, or unknown.
-dec_to_oct | Converts from decimal to octal.
-dec_to_hex | Coverts from dectimal to hexadecimal.
-man_3_printf  | Man page

## Install

To install the program execute in terminal git clone https://github.com/Gaby-Do/printf

##Main

°_printf functions examples:

¬_printf("char: [%c]\n", 'H');
-Output: char: [H]

¬_printf("string: [%s]\n", "Hello World !");
-Output: string: [Hello World !]

¬_printf("integer: [%i]\n", 26);
-Output: integer: [26]

¬_printf("decimal: [%d]\n", 10000);
-Output: decimal: [10000]

¬_printf("octal [%o]\n", 92);
-Output: octal [134]

¬_printf("Percent: [%%%%]\n");
-Output: Percent: [%%]

¬_printf("Reverse: [%r]\n", "Programming is great!");
-Output: Reverse: [!taerg si gnimmargorP]

##Manual

To review the _printf function manual execute in your terminal:

$ man ./man_3_print

##About authors

Gabriela Dominguez & Matias López
