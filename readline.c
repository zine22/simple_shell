#include "main.h"

/**
* readline - reads input from the user
*
* Return: line or null
*
*
*/

char *readline(void)
{
char *line = NULL;
size_t bufsize = 0;
int len = 0;

len = getline(&line, &bufsize, stdin);
if (len == -1)
{
free(line);
return (NULL);
}
if (line[len - 1] == '\n')
line[len - 1] = '\0';

return (line);
}
