#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int i = 0;
int len = 0;

void add_to_buffer_string(char buffer[], char *str)
{
	while (*str)
	{
		buffer[i++] = *str++;
		len++;
	}
}

void add_to_buffer_char(char buffer[], char c)
{
	if (c)
	{
		buffer[i++] = c;
		len++;
	}
}

int print_buffer(char buffer[])
{
	int x = len;
	write(1, buffer, len);
	i = 0;
	len = 0;
	return(x);
}
