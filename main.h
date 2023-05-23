#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define DELIM " \a\n\r\t\""
extern char **environment;

void from_terminal(void);
void not_from_terminal(void);

char _getline(void);
char **_strtok(char *strings);
int execute_args(char **args);

int _process(char **args);

char *stream_reader(void);

int _cd(char **args);
int _exit(char **args);
int _env(char **args);
int _help(char **args);

#endif
