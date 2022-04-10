#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k;
j = '0';
k = '0';
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
putchar('\n');
}
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
