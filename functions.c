#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


char* print_int(va_list args)
{
	int x = va_arg(args, int);
	char *num = malloc(sizeof(char) * num_len(x) + 1);
	num = intToString(x);
	return (num);
}

char print_char(va_list args)
{
	int y = va_arg(args, int);
	char c = (char)y;
return (c);
}

char* print_string(va_list args)
{
	char *str;
	str = va_arg(args, char *);
return (str);
}

void flush_buffer(char buffer[])
{
	int i;
	i = 0;
	for(i = 0; i < _strlen(buffer); i++)
	{
		buffer[i] = 0;
	}

}