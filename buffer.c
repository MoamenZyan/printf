#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

<<<<<<< HEAD
int i = 0;
int len = 0;
=======
static int i;
static int len;

/**
 * add_to_buffer_string - function that adds string to the buffer
 * @buffer: the buffer
 * @str: the string that we want to add
 * Return: void
*/
>>>>>>> 60d8ad6 (final commit)

void add_to_buffer_string(char buffer[], char *str)
{
	while (*str)
	{
		buffer[i++] = *str++;
		len++;
	}
}

/**
 * add_to_buffer_char - function that adds character to the buffer
 * @buffer: the buffer
 * @c: the character that we want to add
 * Return: void
*/

void add_to_buffer_char(char buffer[], char c)
{
	if (c)
	{
		buffer[i++] = c;
		len++;
	}
}

<<<<<<< HEAD
int print_buffer(char buffer[])
{
	int x = len;
	write(1, buffer, len);
	i = 0;
	len = 0;
	return(x);
=======
/**
 * print_buffer - function that prints out buffer and flushs
 * @buffer: the buffer
 * Return: length of the buffer
*/

int print_buffer(char buffer[])
{
	int x = len;

	write(1, buffer, len);
	i = 0;
	len = 0;
	return (x);
>>>>>>> 60d8ad6 (final commit)
}
