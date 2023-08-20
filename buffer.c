#include "main.h"
#include <stdio.h>
#include <stdlib.h>

static int i = 0;

void add_to_buffer_string(char buffer[], char *str)
{
	while (*str)
	{
		buffer[i++] = *str++;
	}
}

void add_to_buffer_char(char buffer[], char c)
{
	if (c)
	{
		buffer[i++] = c;
	}
}