#ifndef SHELL_H
#define SHELL_H
#define MAXCOM 1000 /*max number of letters to be supported*/
#define MAXLIST 100 /*max number of commands to be supported*/
#define clear() printf("\033[H\033[J")
/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

void init_shell();
char *read_cmd(void);
void print_prompt1(void);
void print_prompt2(void);

#endif /* SHELL_H */
