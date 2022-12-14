#ifndef MY_PRINTF_H
#define MY_MASTERMIND_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_printf(char *restrict format, ...);
char *transform(long long num, char *hash, int base);
int print_characters(char *arg);
int print_number(int arg);

#endif