#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char car = 'a', CAR = 'A';
while (car <= 'z')
{
putchar(car);
car++;
}
while (CAR <= 'Z')
{
putchar(CAR);
CAR++;
}
putchar('\n');
return (0);
}
