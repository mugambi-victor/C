#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
    char buffer[1024];  // Local buffer with a size of 1024 characters
    int buffer_index = 0; // Index to keep track of buffer position
	//format specifiers, each letter has a corresponding function to handle.// contained in the format specifiers file.
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	//va-list variable is used to access the variable arguments passed to the function.
	va_list arg_list;

	if (format == NULL)
		return (-1);

		/*
		Processing and Returning: The va_start macro initializes the
            arg_list variable to start processing the variable arguments.
            The parser function is then called
            to process the format string and variable arguments.
            Finally, va_end is used to clean up after processing the variable arguments.
		*/
	va_start(arg_list, format);


	// Call the parser function and store the result in the buffer
    buffer_index = parser_to_buffer(buffer, buffer_index, format, f_list, arg_list);

    va_end(arg_list);

    // Now, you can choose what to do with the buffer contents (e.g., print to stdout)
    printed_chars = write(1, buffer, buffer_index);  // Assuming file descriptor 1 is stdout

    return (printed_chars);
}

