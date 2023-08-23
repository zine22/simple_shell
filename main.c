#include "main.h"

/**
* main - runs UNIX command
*
* Return: 1 (success)
*/

int main(void)
{
int status = 1;
char *line, **args;

signal(SIGINT, sigint_handler);

while (status)
{
status = isatty(STDIN_FILENO);
if (status == 1)
write(STDOUT_FILENO, "$ ", 2);

line = readline();
if (!line)
return (0);

if (_strcmp(line, "exit") == 0)
{
free(line);
return (0);
}
if (_strcmp(line, "env") == 0)
{
_printenv();
free(line);
continue;
}

args = splitline(line);

if (args == NULL)
{
free(line);
free(args);
continue;
}
status = execute(args);
free(line);
free(args);
}
return (0);
}
