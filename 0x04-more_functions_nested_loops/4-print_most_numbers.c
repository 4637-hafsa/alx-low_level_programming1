#include"main.h"
/**
* print_most_numbers - print 0 - 9 apart
* without 2 and 4
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int a;
while (a < 10)
{
if (a != 2 && a != 4)
_putchar(a + '0');
a++;
}
_putchar('\n');
}
