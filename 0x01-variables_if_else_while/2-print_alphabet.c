#include <stdio.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints alphabets from A to Z in small
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
