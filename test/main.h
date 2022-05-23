#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_number(int n);
void _puts(char *str);
extern int count;

#endif /* MAIN_H */
