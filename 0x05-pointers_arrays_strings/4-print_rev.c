/**
  * print_rev - function that prints on reverse
  * @s: string
  * return: 0
*/
void print_rev(char *s)
{
int length = 0;
int rev;
while (*s != '\0')
{
length++;
s++;
}
for (rev = length; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
