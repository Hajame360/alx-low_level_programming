#include <stdio.h>
/**
* main - print he string from the main function
*
* Description: print from the main function
* this program prints A to Z from the last letter
* Return: 0
*/
int main(void)
{
int i;
for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
