#include "main.h"

/**
* _strcat - concatonates two strings
*
* @destin: destination str
* @src: source str
*
* Return: ptr to a new str
*/

char *_strcat(char *destin, char *src)
{
int length, p;

length = 0;
while (destin[length] != '\0')
length++;

for (p = 0; src[p] != '\0'; p++, length++)
destin[length] = src[p];

destin[length] = '\0';
return (destin);
}
