#include "holberton.h"

/**
 * print_char - print character
 * @list: list of arguments
 * Return: always success
 */

int print_char(va_list list)
{
_putchar(va_arg(list, int));
return (1);
}

/**
 * print_string - print a string
 * @list: list of arguments
 * Return: always success
 */

int print_string(va_list list)
{
int i;
char *str;
str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: always success
 */

int print_percent(__attribute__((unused))va_list list)
{
_putchar('%');
return (1);
}

/**
 * print_integer - print an integer
 * @list: list of arguments
 * Return: always success
 */

int print_integer(va_list list)
{
int number;
number = print_number(list);
return (number);
}

/**
 * print_number - prints a number send to this function
 * @list: List of arguments
 * Return: always success
 */

int print_number(va_list list)
{
int n;
int div;
int len;
unsigned int num;
n  = va_arg(list, int);
div = 1;
len = 0;
if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
num = n;
for (; num / div > 9; )
div *= 10;
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
