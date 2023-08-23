#include "main.h"

/**
* _strlen - finds the length of string
*
* @s: string
*
* Return: str length
*/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
++i;
}
return (i);
}
