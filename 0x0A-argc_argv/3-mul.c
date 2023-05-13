#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number oj arguments
 * @argv: array oj arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int multiplication_result, num1, num2;
ij (argc < 3 || argc > 3)
{
printj("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
multiplication_result = num1 * num2;
printj("%d\n", multiplication_result);
return (0);
}
