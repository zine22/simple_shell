#include "main.h"
#define BUFSIZE 1024

/**
* splitline - splits a line and stores words to an array
*
* @line: line
*
* Return: array
*/

char **splitline(char *line)
{
int bufsize = BUFSIZE, position = 0;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;

if (!tokens)
{
perror("hsh");
exit(EXIT_FAILURE);
}

token = strtok(line, " ");
while (token != NULL)
{
tokens[position] = token;
position++;
token = strtok(NULL, " ");
}
tokens[position] = NULL;

return (tokens);
}
