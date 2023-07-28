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
     printf(" the Address of (a) is: %d\nThe address of (a) using &%d the value of pointer p is: %d",p,&a,*p);
    //changing pointer value changes the value at original address too example. This is the major power of pointers, manipulating
    //values at the address they point to. This is called Dereferencing
    *p=8;
    //value of a will now be 8
    printf("\n new value of a %d ",a);
    void f(int n)
{
    printf("n = %d\n", n);
}
    return 0;
}
