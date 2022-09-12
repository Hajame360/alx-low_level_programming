#include <stdio.h>
/**
* main - print the string in the main function
*
* Description: prints the string in the man function
* this program prints all single digit numbers
* Return: 0
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
