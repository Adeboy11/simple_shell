Author: ADEOLU ADEAGBO and OLAKUNLE ABIODUN 
Project title : Simple-Shell
Alx for Africa: chort13
Course: software Engineering 
collaborated project starting May 10, 2023 6:00 AM, must end by May 25, 2023 6:00 AM
solution file to all task 
AUTHORS  
_env.c     
execve.c  
from_terminal.c  
_help.c  
main.c  
not_from_terminal.c  
README.md        
_strtok.c
_cd.c    
_execve.c  
_exits.c  
_getline.c       
hsh      
main.h  
_process.c           
stream_reader.c

main.h file which  all the prototype use this project
/**
*#ifndef MAIN_H
*#define MAIN_H

*#include <stdio.h>
*#include <unistd.h>
*#include <stdlib.h>
*#include <string.h>
*#include <sys/wait.h>
*
*#define DELIM " \a\n\r\t\""
*extern char **environ;
*
*void from_terminal(void);
*void not_from_terminal(void);
*typedef int execve_args(char **args);
*
*char *_getline(void);
*char **_strtok(char *strings);
*
*int _process(char **args);
*
*char *stream_reader(void);
*
*int _cd(char **args);
*int _exitf(char **args);
*int _env(char **args);
*int _help(char **args);

*#endif 
