#include <stdio.h>
#include <stdlib.h>
void print_alphabet(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                putchar(letter);
        putchar('\n');
}
int main()
{
    print_alphabet();
    return 0;
}
