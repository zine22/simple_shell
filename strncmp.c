#include "main.h"

/**
* _strncmp - compare bytes in str1 and str2
*
* @str1: first str
* @str2: second str
* @n: number of bytes
*
* Return: 0 or positive or negative value
*/

int _strncmp(char *str1, char *str2, int n)
{
if (!n)
{
return (0);
}

if (*str1 == *str2)
{
return (*str1 ? _strncmp(str1 + 1, str2 + 1, n - 1) : 0);
}

if (*str1)
{
return (1);
}
if (*str2)
{
return (-1);
}
return (*str1 - *str2);
}
