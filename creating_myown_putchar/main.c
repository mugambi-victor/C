#include "main.h"
/**
    A program that uses my user defined header (main.h) and my user defined (_putchar) function that prints data to the
    stdout.
    Write a program to Print all the alphabet
**/

int main()
{
    char c;
     c='a';
     while(c<='z')
     {
         _putchar(c);
         c++;
     }

    return 0;
}
