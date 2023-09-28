#include"main.h"
/**
* main - print numbers 1 - 100 followed by a new line
*       numbers that are multiples of 3 print Fizz
*       numbers that are multiples of 5 print Buzz
*       numbers that are multiples of 3 n 5 print FizzBuzz
*       each number and word to be separated by space
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
printf("1");
for (n = 2; n <= 100; n++)
{
printf(" ");
if (n % 3 == 0)
printf("Fizz");
if (n % 5 == 0)
printf("Buzz");
if (n % 3 != 0 && n % 5 != 0)
printf("%d", n);
}
printf("\n");
return (0);
}
