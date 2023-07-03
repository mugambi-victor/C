#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table
    float lower,upper,cel,fahr,step;
    lower=0;
    upper=300.0;
    step=20.0;
    cel=lower;
    while(cel<upper){
        fahr=(9.0/5.0*cel)+32.004;
        printf("%3.2f\t%6.7f\n",cel,fahr);
        cel=cel+step;
    }

int c;
while((c = getchar()) != EOF){

printf("%d",(c!=EOF));
 }

    return 0;

}
