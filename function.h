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
void getInput(shelldata_t *mytype);
int _strlen(char *s);
int display(char *message);
int outputToFD(char *message, int fil_d);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strcmp(char *s1, char *s2);
char *getEnv(const char *variable);
void signatureHandler(int num);
void isCurrPath(char *pat, shelldata_t *mytype);
void releaseMemory(void *pointer);
void releaseMemoryPointer(void **pointer);
void evaluate(char **args, shelldata_t *mytype, char *buffer);
void patternAnalysis(shelldata_t *mytype, char **args);
char *handle_pattern(shelldata_t *mytype, char *words);
char *subtituteValue(shelldata_t *info, int *id, char *str);
void run(char *cmd, char **argu, shelldata_t *mytype, char *buffer);
char *choose(char *dirname, shelldata_t *mytype);
int isFile(char *filename);
int isExecutable(char *name);
int getCurrentDir(char *command, char **argu, char *buff, shelldata_t *mytype);
void issue(shelldata_t *mytype);
char *exchange(shelldata_t *mytype, int *id, char *word);
int verifyBuiltin(shelldata_t *mytype, char **args);
char *subEnv(shelldata_t *mytype, char *envi_var);
int displayError(char *message);
char *selectMessage(shelldata_t mytype);
void binaryExit(shelldata_t *mytype, char **args);
void binaryEnv(shelldata_t *mytype, char **args);
void fetchFullEnv(void);
int writeCharacter(char character);
int manageNumbers(shelldata_t *mytype, char *argument);
int _atoi(char *s);
void additionalError(shelldata_t *mytype, char *more);
int systemFunction(shelldata_t *mytype, char **args);
int writeCharacterToFD(char cha, int fil_d);
#endif
