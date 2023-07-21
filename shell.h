#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct inbuilt - contains a builtin string and related function
 * @type: the inbuilt command flag
 * @func: the function
 */
typedef struct inbuilt
{
	char *type;
	int (*func)(info_t *);
} inbuilt_table;

/*_atoi.c */
int interactive(info_t *);
int is_delim(char, char *);
int _isalpha(int);
int _atoi(char *);

#endif
