#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - that function calculate length of the string
 * @s: the string passed to the function
 * Return: length of the string
*/

int _strlen(char *s)
{
	if (s == NULL)
		return (0);

	int len, i;

	i = 0;

	while (s[i] != '\0')
		i++;

return (i);
}
