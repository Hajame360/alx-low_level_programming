#include <stdio.h>
/**
* main - print the string from the main function
*
* Description: print from the main function
* this program prints base 16 numbers
* Return: 0
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
