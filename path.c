#include "main.h"

/**
* get_path - gets the full path of a command
*
* @command: command to find the path
*
* Return: path
*/

char *get_path(char *command)
{
struct stat st;
int i;
char *path = _getenv("PATH");
char **dirs = tokenize_env(path);
char *cmd = command;
char *fullpath = malloc(sizeof(char) * 1024);

if (fullpath == NULL)
return (NULL);

for (i = 0; dirs[i]; i++)
{
fullpath[0] = 0;
_strcat(fullpath, dirs[i]);
_strcat(fullpath, "/");
_strcat(fullpath, cmd);
if (stat(fullpath, &st) == 0)
{
return (fullpath);
}
}
free(fullpath);
return (NULL);
}
