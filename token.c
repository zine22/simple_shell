#include "main.h"

/**
* tokenize_env - tokenize the PATH to return a list of dirs
*
* @path: path str to an array
*
* Return: array
*/

char **tokenize_env(char *path)
{
char *path_copy = path;
int i = 0;
char *token;

static char *array[24] = {NULL};

if (path == NULL)
return (NULL);

token = strtok(path_copy, ":");
while (token != NULL)
{
array[i++] = token;
token = strtok(NULL, ":");
}

return (array);
}
