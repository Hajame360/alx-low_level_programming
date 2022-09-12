#include <stdio.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints alphabets from A to Z in small then upper
* Return: 0
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
