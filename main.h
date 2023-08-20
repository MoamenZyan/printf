#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

#define BUFF_SIZE 1024
#define BUFF_FLUSH -1



char *print_int(va_list args);

char print_char(va_list args);

char *print_string(va_list args);

char *intToString(int num);

int _printf(const char *format, ...);

void add_to_buffer_string(char buffer[], char *str);

void add_to_buffer_char(char buffer[], char c);

int _strlen(char *s);

int num_len(int x);

void flush_buffer(char buffer[]);

#endif
