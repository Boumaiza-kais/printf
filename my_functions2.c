#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_unsigned_integer - Print unsigned integers
 * @list: List of argumets
 * Return: always success
 */

int print_unsigned_integer(va_list list)
{
unsigned int num;
num = va_arg(list, unsigned int);
if (num == 0)
return (print_unsgined_number(num));
if (num < 1)
return (-1);
return (print_unsgined_number(num));
}

/**
 * print_unsgined_number - print an unsigned number
 * @n: unsigned int type
 * Return: always success
 */

int print_unsgined_number(unsigned int n)
{
int div;
int len;
unsigned int num;
div = 1;
len = 0;
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

/**
* print_reversed - prints the reversed string
* @list: list of arguments
* Return: always success
*/
int print_reversed(va_list list)
{
char *string;
int i = 0, k = 0;
string = va_arg(list, char *);
if (string == NULL)
{
string = ")llun(";
}
for (i = 0; string[i]; i++)
{
;
}
i--;
for (; i >= 0; i--)
{
_putchar(string[i]);
k++;
}
return (k);
}



/**
* print_rot13 - prints the rot13'ed string
* @list: list of arguments
* Return: always success
*/
int print_rot13(va_list list)
{
char *s = va_arg(list, char *);
int i, j, k = 0;
char alpha_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char list_l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while ((alpha_letters[j] != '\0') && (s[i] != alpha_letters[j]))
{
j++;
}
if (s[i] == alpha_letters[j])
{
_putchar(list_l[j]);
k++;
}
else if (alpha_letters[j] == '\0')
{
_putchar(s[i]);
k++;
}
}
return (k);
}

/**
* print_binary - convert an integer to binary
* @list: the list of arguments
* Return: always success
**/

int print_binary(va_list list)
{
unsigned int binary[32];
int i = 0;
unsigned int number = 0, k = 0;
number = va_arg(list, unsigned int);
if (number < 2)
{
_putchar(number + '0');
k++;
}
else
{
while (number > 0)
{
binary[i] = number % 2;
number = number / 2;
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(binary[i] + '0');
k++;
}
}
return (k);
}
