#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include "shelldata.h"

extern char **environ;

void begin(shelldata_t *mytype);
int number(int num);
char *stringify(int numbe);
int isNumeric(unsigned int number);
int hasLetter(char *string);
char **tokenize_words(char *string, const char *del);
char *mergeWords(char *w1, char *w2, char *w3, const char *del);
char *parse_prompt(void);
void initiatePrompt(shelldata_t *mytype);
int _strlen(char *s);
#endif
