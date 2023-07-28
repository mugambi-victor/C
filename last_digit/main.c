#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
    * This program will assign a random number to the variable n each time it is executed.
    * Complete the source code in order to print the last digit of the number stored in the variable n.
*/
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit=n % 10;
	if(lastdigit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5",n,lastdigit);
    }
    else if(lastdigit==0)
     {
        printf("Last digit of %d is %d and is 0",n,lastdigit);
    }
    else
    {
        printf("Last digit of %d is %d and and is less than 6 and not 0",n,lastdigit);
    }
	return (0);
}
