#include <stdio.h>
#include <stdlib.h>
void print_shape(int num1, int num2)
{
    int idx1, idx2;
    for(idx1=0; idx1<num1; idx1++)
    {

        for(idx2=0; idx2<num2;idx2++)
        {
            printf('#');
        }
        printf('*');
    }
}

int main()
{
   print_shape(4,3);
    return 0;
}
