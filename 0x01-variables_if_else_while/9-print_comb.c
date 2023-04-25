#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
if (i != 9)
{
putchar (i + 48);
putchar (44);
putchar (' ');
i++;
}

else
{
putchar (i + 48);
i++;
}
}
putchar ('\n');
return (0);
}
