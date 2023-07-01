#include <stdio.h>
#include <stdlib.h>

int main()
{
    sum1(0);

    return 0;
}
void sum1(int n){
int sum=0;
for(int i=0;i<=n;i++ ){
    sum=sum+(i*i);

}

 printf("sum is %d",sum);
}
