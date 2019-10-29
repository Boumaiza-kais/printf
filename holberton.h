#ifndef _PRINT_F
#define _PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @op: The operator
 * @f: The function associated
 */
struct convert
{
char *op;
int (*f)(va_list);
};
typedef struct convert conver_t;

/*Functions*/
int converter(const char *format,
conver_t list_of_function[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int print_rot13(va_list args);
int print_unsigned_integer(va_list);
int print_unsgined_number(unsigned int);

#endif
