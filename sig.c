#include "main.h"

/**
* sigint_handler - handles signal when typing ctrl + c
*
* @signal: signal
*/

void sigint_handler(int signal)
{
(void)signal;
printf("\n");
write(STDOUT_FILENO, "$ ", 2);
fflush(stdout);
}
