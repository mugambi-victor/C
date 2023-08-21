#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>



/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
	_print_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_print_char(str[i]);
	return (i);
}
/**
 * print_integer - Prints an integer value
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_print_char('%');
	return (1);
}
/**
 * print_unsigned_int - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int print_unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}

void print_char1(char *buffer, va_list args) {
    char c = va_arg(args, int);  // Retrieve the character argument
    *buffer = c;  // Store the character in the buffer
}
