#include <stdio.h>
#include <stdlib.h>
/**
* A program that prints a string to the stdout. The program should use the function: void _puts(char *str);
**/
_puts(char *str){
    while(*str)
    putchar(*str++);
}
int main()
{
    char *str;
    str ="Hello world";
    _puts(str);
    return 0;
}
