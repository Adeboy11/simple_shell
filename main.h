#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define DELIM " \a\n\r\t\""
extern char **environ;

void from_terminal(void);
void not_from_terminal(void);
int execve_args(char **args);

char *_getline(void);
char **_strtok(char *strings);

int _process(char **args);

char *stream_reader(void);

int _cd(char **args);
int _exitf(char **args);
int _env(char **args);
int _help(char **args);

#endif
