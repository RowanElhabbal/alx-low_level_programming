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
putchar(car);
car++;
}
putchar('\n');
return (0);
}
