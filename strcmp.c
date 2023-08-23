#include "main.h"

/**
* _strcmp - compare two strings
*
* @s1: first str
* @s2: second str
*
* Return: 0 or negative or positive value
*/

int _strcmp(char *s1, char *s2)
{
int i = 0, ret;

for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] == s2[i])
continue;
else
break;
}
ret = s1[i] - s2[i];
return (ret);
}
