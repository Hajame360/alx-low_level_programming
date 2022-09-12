#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints alphabets from A to Z in small
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch;
}
putchar('\n')
return (0);
