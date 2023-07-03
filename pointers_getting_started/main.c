#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointers are variables that store address of other variables.
    int a;
    a=5;
    //defining a pointer variable we use an (*) before the variablename
    //putting a ampersand(&) before variable name we get the address of variable
    int *p;
    p=&a;
     printf("%d %d %d",p,&a,*p);
    //changing pointer value changes the value at original address too example
    *p=8;
    //value of a will now be 8
    printf("\n new value of a %d ",a);
    return 0;
}
