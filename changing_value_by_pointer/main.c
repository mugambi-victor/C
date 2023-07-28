#include <stdio.h>
#include <stdlib.h>
/**
* in C, all arguments are passed by value. when you pass a variable by value, you are passing a copy of its value to the function
* Any changes made to the copy inside the function do not affect the original variable.
* Since the variables of pointers are addresses, it is possible to modify a variable from outside the function it is declared in,
* using a pointer. Here is an example.
**/
void modify_my_param(int *m){
    *m=402;
}
int main()
{
    int n;
    int *p;

    n=98;
    p=&n;

    printf("the address of n is %d\nThe value of n is %d",p,n);
    //use the pointer to n
    modify_my_param(p);
     printf("\nThe new value of n is %d",n);
    return 0;
}
