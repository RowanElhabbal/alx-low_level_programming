#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char car = 'a';
while (car <= 'z')
{
if (!(car == 'e' || car == 'q'))
{
putchar(car);
}
car++;
}
return (0);
}
