#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
/* functions prototype */
int _printf(const char *format, ...);
int _putchar(char c);
/* functions prototypes conversion */
int print_char(char arg);
int print_string(char *arg);
int print_int(int arg);
#endif/* PRINTF_H */
