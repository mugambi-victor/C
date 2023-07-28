#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    for(num1=0;num1<100;num1++)
    {
        for(num2=num1+1;num2<100;num2++)
        {
            printf("%d %d, ",num1,num2);
        }
    }
    return 0;
}
