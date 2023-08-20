#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"



int _printf(const char *format, ...)
{
char *buffer = malloc(sizeof(char) * BUFF_SIZE);
int len;
va_list args;
va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if(strchr("dcsipruox", *(format + 1)) != NULL)
				format++;
			switch (*format)
			{
				case 'i':
				case 'd':
					format++;
					add_to_buffer_string(buffer, print_int(args));
					break;
				case 'c':
					format++;
					add_to_buffer_char(buffer, print_char(args));
					break;
				case 's':
					format++;
					add_to_buffer_string(buffer, print_string(args));
					break;
				default:
					add_to_buffer_char(buffer, *format);
					format++;
					break;
			}
			continue;
		}
		add_to_buffer_char(buffer, *format);
		format++;
	}
	write(1, buffer, _strlen(buffer));
	len = _strlen(buffer);
	free(buffer);
	va_end(args);
	return (len);
	
}