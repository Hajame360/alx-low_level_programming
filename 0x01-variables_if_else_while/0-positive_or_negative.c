#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the string in the main function
*
* Description: using the main function
* this program prints is negative, is positive, is zero
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n < 0) 
{
	printf("is negative");
}
else if (n > 0)
{
	printf("is positive");
}
else
{
	printf("is zero");
}
return (0);
}

