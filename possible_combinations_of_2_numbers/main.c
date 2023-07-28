#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit1, digit2, digit3,digit4,digit5;

    for(digit1 = 48;digit1 <=57;digit1++)
    {
        for(digit2 = digit1+1; digit2 <=57; digit2++)
        {
            putchar(digit1);
            putchar (digit2);
            putchar(', ');
        }

    }
    putchar('\n');
    /**
        *Write a program that prints all possible different combinations of three digits.
    **/
    for(digit3 = 48;digit3 < 56;digit3++)
    {
        for (digit4 = digit3+1; digit4 < 57;digit4++)
        {
            for(digit5= digit4 + 1;digit5 <= 57;digit5++ )
            {
                if(digit3==7 && digit4==8 &&digit5==9)
                    continue;
                putchar(digit3);

                putchar(digit4);

                putchar(digit5);
                  putchar(', ');

            }
        }
    }
    return 0;
}
