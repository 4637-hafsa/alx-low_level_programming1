#include "main.h"
/**
* _isdigit - checks if input is digit between 0 - 9
*
* @c: input
*
* Return: 1 if is digit, 0 otherwise
*/
int _isdigit(int c)
{
int y = 0;
if (c >= '0' && c <= '9')
y = 1;
return (y);
}
