#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int k=16;
    int m=16;
    if(n>k&&n>m){
            if(k>m){
                 printf("%d %d %d",n,k,m);
            }else{
                 printf("%d %d %d",n,m,k);
            }

    }
    else if(k>n&&k>m){
        if(n>m){
                 printf("%d %d %d",k,n,m);
            }else{
                 printf("%d %d %d",k,m,n);
            }
    }else{
     if(n>k){
                 printf("%d %d %d",m,n,k);
            }else{
                 printf("%d %d %d",m,k,n);
            }
    }

    return 0;
}
