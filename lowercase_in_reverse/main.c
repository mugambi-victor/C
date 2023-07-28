#include <stdio.h>
#include <stdlib.h>
/**
* A program that prints lowercase letters in reverse using putchar and ASCII values
*/
int main()
{
    int n;

    n = 122;

    while(n >= 97)
    {
        putchar(n);
        n--;
    }
    return 0;
}
