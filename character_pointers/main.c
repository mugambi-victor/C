#include <stdio.h>
#include <stdlib.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
   *cc = 'o';
   ccc = 'l';
   printf("The value of pointer *cc is: %c",*cc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   modif_my_char_var(p, c);
   printf("The value of c is: %c",c);
   return (0);
}
