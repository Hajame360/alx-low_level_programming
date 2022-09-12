#include <stdio.h>
/**
* main - print the string from the main function
*
* Description: using putchar to print numbers
* this program printssingle digit numbers using putchar
* Return: 0
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
