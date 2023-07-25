#ifndef SHELL_H
#define SHELL_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stddef.h>
/*PROTOTYPES*/
int custom_hello(void);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, const char *src);
char *search_path(char *command);
char **_split(char *str, char *sep);
char *_strcat(char *dest, const char *src);
size_t _strlen(const char *s);
char *_getenv(char *env_var);
void *_calloc(unsigned int nmemb, unsigned int size);
void _env(void);
int execute(char **args);
int empty_line(char *buff);
int _putchar(char c);
void write_stderr(const char *str);
void write_perror_stderr(const char *str);
char *_strncpy(char *dest, const char *src, size_t n);
char *_strchr(const char *str, int c);
char *_strdup(const char *str);
/* GLOBAL VAR*/
extern char **environ;

#endif
