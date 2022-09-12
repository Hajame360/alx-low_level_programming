#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints alphabets from A to Z except for q and e
* Return: 0
*/
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
