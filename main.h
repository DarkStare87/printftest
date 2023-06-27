#ifndef PRINTF_PROJECT
#define PRINTF_PROJECT

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define OUTPUT_BUFFER 1024
#define BUFFER_FLUSH -1

#define INPUTS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct inputs - Inputs Structure
 * @unsign: check if inputs unsign
 * @plus: check if inputs plus
 * @space: check if inputs space
 * @hashtag: check if inputs hastag
 * @long_modifier: check if inputs long
 * @short_modifier: check if inputs is short
 * @width: check if inputs is width
 * @precision: check if inputs is precision
 * @zero: check if inputs is zero
 * @minus: check if inputs in minus
*/
typedef struct inputs
{
	unsigned int unsign         :1;
	unsigned int plus           :1;
	unsigned int space          :1;
	unsigned int hashtag        :1;

	unsigned int long_modifier  :1;
	unsigned int short_modifier :1;

	unsigned int width          :1;

	unsigned int precision      :1;

	unsigned int zero           :1;

	unsigned int minus          :1;
} inputs_t;

/**
 * struct determination - Determination structure
 * @determ: the format
 * @f: Its function
 */
typedef struct determination
{
	char *determ;
	int (*f)(va_list, inputs_t *);
} determ_t;

/* _put.c file */
int _puts(char *str);
int _putchar(int c);

/* _printf.c file */
int _printf(const char *format, ...);

/* _function.c file */
int print_char(va_list ap, inputs_t *params);
int print_string(va_list ap, inputs_t *params);
int print_percent(va_list ap, inputs_t *params);
int print_int(va_list ap, inputs_t *params);
int print_S(va_list ap, inputs_t *params);

/* convert_number.c file */
int print_binary(va_list ap, inputs_t *params);
int print_hex(va_list ap, inputs_t *params);
int print_HEX(va_list ap, inputs_t *params);
int print_octal(va_list ap, inputs_t *params);

/* number.c file */
char *convert(long int num, int base, int flags, inputs_t *params);
int print_unsigned(va_list ap, inputs_t *params);
int print_address(va_list ap, inputs_t *params);

/* simple_printers.c */
int print_from(char *start, char *stop, char *except);
int print_rev(va_list ap, inputs_t *params);
int print_rot13(va_list ap, inputs_t *params);

/* Determination.c file */
int (*get_determ(char *s))(va_list ap, inputs_t *params);
int get_modifier(char *s, inputs_t *params);
int get_print(char *s, va_list ap, inputs_t *params);
int get_flag(char *s, inputs_t *params);
int *get_width(char *s, inputs_t *params, va_list ap);

/* print_number.c */
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *s, inputs_t *params);
int print_number_shift_right(char *str, inputs_t *params);
int print_number_shift_left(char *s, inputs_t *params);

/* params.c file */
void int_params(inputs_t *params, va_list ap);

/* string_fields.c file */
char *get_precision(char *p, inputs_t *params, va_list ap);

#endif /* PRINTF_PROJECT */
