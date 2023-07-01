#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int myNum;
    printf("enter a value to add ");
    scanf("%d", &myNum);

    while(myNum>=0){
        sum=sum+myNum;
         printf("sum is %d",sum);
        printf("\n next number");
    scanf("%d", &myNum);
    }


    printf("sum is %d",sum);
    return 0;
}
