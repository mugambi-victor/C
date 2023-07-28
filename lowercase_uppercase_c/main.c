#include <stdio.h>
#include <stdlib.h>
/**
    *A program that prints Lowercase and uppercase letters except Q & Z
**/
int main()
{
    char letter, letterUpper;

    letter='a';
    letterUpper='A';
    while(letter<='z')
    {
        putchar(letter);
        letter++;
    }
    printf("\n");
    while(letterUpper<='Z')
    {
        if(letterUpper == 'Q' || letterUpper == 'Z')
        {
            //first increment then continue
            letterUpper++;
            continue;
        }
        putchar(letterUpper);
        letterUpper++;
    }
    return 0;
}
