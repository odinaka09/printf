#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * print function.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
void print_number(long n);
int count_digits(long n);
char *convert(unsigned long num, int base, int lowercase);
int _print_binary(va_list, flag_t *, mod_t *);
int _print_hexa_upper(va_list, flag_t *, mod_t *);
int _print_hexa_lower(va_list, flag_t *, mod_t *);
int _print_octal(va_list, flag_t *, mod_t *);
int _print_unsigned(va_list, flag_t *, mod_t *);
int _print_address(va_list, flag_t *, mod_t *);
int  _print_dec(va_list, flag_t *, mod_t *);

#endif
