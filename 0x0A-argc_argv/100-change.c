#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum int_number of coins to
 * make change for an amount of money
 * @argc: int_number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int int_num, j, result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
int_num = atoi(argv[1]);
result = 0;
if (int_num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && int_num >= 0; j++)
{
while (int_num >= coins[j])
{
result++;
int_num = int_num - coins[j];
}
}
printf("%d\n", result);
return (0);
}
