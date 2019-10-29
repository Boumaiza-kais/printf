#include "holberton.h"

/**
 * converter - print a string from the main string and paramaters
 * @format: char type.
 * @list_of_function: A list of all functions.
 * @arg_list: list containing all the argumentents passed to the program.
 * Return: total of the characters printed.
 */

int converter(const char *format,
conver_t list_of_function[], va_list arg_list)
{
int i, j, k, print_c;
print_c = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; list_of_function[j].op != NULL; j++)
{
if (format[i + 1] == list_of_function[j].op[0])
{
k = list_of_function[j].f(arg_list);
if (k == -1)
return (-1);
print_c = print_c + k;
break;
}
}
if (format[i + 1] != ' ' && list_of_function[j].op == NULL)
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
print_c = print_c + 2;
}
else
return (-1);
}
i++;
}
else
{
_putchar(format[i]);
print_c++;
}
}
return (print_c);
}
