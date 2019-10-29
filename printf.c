#include "holberton.h"

/**
 * _printf - print a string from the main string and paramaters
 * @format: string containing all characters passed to the program.
 * Return: total of the characters printed
 */

int _printf(const char *format, ...)
{
int print_c;
conver_t list_of_function[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"b", print_binary},
{"r", print_reversed},
{"R", print_rot13},
{"u", print_unsigned_integer},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
print_c = converter(format, list_of_function, arg_list);
va_end(arg_list);
return (print_c);
}
