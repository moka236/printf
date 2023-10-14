#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>
#include <unistd.h>
#include <limits.h>



typedef struct format
{
	char id*;
	int (*f)();
   
} team;
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_x_string(va_list val);
int print_hex(unsigned long int num);
int print_pointer(va_list val);
#endif
