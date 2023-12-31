#ifndef _SHELL_H_
#define _SHELL_H_
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>

/*macros*/
#define PATH_MAX_LENGTH 4096
#define PATH_SEPARATOR ":"
#define PROMPT "$ "
#define MAX_TOKENS 1024
#define BUFFER_SIZE 1024

/* prompt_line_interpreter.c */
void prompt_line_interpreter(void);

/* get_input.c */
char *get_input(void);
void free_input(void);

/* get_in.c*/
void *get_in(void);

/* built-in funcs */
int check_builtin(char **args);
int execute_buitlin(char *command, char **args);
void shell_information(void);
void exit_shell(char **args);
void cd_shell(char **args);
int setenv_shell(char **args);
int unsetenv_shell(char **args);
int shell_environ(void);
int clear(char **args);

/* signal_handler.c */
void handle_sigint(int sig);
void handle_sigquit(int sig);
void handle_sigstp(int sig);

/* exec.c */
int exec(char **args);

/* parser.c */
char **tokensize(char *str, const char *delim);
char **tokensize_input(char *input);

/* get_environ.c */
char *get_environ(const char *thename);

/* get_path.c */
char *get_path(void);

/* find_path.c */
char *find_path(char *cmd);

/* free.c */
void freeerror(char **argv, char *arg);
void freetoken(char **pointer);
void freepath(void);

/* printstr.c */
void printstr(char *str);
void printerror(char *error);

/* utils_funcs1.c */
int _strlen(const char *);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);

/* utils_funcs2.c */
char *_strcopy(char *, char *);
char *_strcat(char *, const char *);
char *_strdup(const char *);
int _putchar(char);
unsigned int _strspn(char *s, char *accept);

/* utils_funcs3.c */
int _atoi(const char *str);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *, unsigned int, unsigned int);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
