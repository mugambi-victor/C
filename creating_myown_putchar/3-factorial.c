#include "main.h"

int factorial(int n)
{
    int num1=1;
    int i=1;
    while(i<=n)
    {
        num1=num1*i;
        i++;
    }

    return (num1);

}
