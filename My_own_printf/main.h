#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
// Hypothetical print_char function
void print_char(char *buffer, va_list args) {
    char c = va_arg(args, int);  // Retrieve the character argument
    *buffer = c;  // Store the character in the buffer
}

typedef struct {
    const char *format;
    void (*print_func)(char *, va_list);
} conver_t;



int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
//int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int _print_char(char);
int print_unsigned_int(va_list);
int print_unsgined_number(unsigned int);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
void print_char1();
/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);




int parser_to_buffer(char *buffer, int buffer_index, const char *format, conver_t *f_list, va_list arg_list) {
    int format_index = 0;

    while (format[format_index] != '\0') {
        if (format[format_index] == '%') {
            format_index++;
            for (int i = 0; f_list[i].format != NULL; i++) {
                if (format[format_index] == f_list[i].format[0]) {
                    f_list[i].print_func(buffer + buffer_index, arg_list);
                    buffer_index += string_length(buffer + buffer_index);
                    format_index++;
                    break;
                }
            }
        } else {
             {
            buffer[buffer_index] = format[format_index];
            buffer_index++;
            format_index++;
        }
    }

    buffer[buffer_index] = '\0'; // Null-terminate the buffer
    return buffer_index;
}

#endif // MAIN_H
