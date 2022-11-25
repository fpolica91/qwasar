#ifndef MY_PRINTF_H
#define MY_MASTERMIND_H
#endif

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_characters(char *arg);
int print_number(int arg);
int my_printf(char *restrict format, ...);