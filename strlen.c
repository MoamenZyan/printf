#include <stdio.h>
#include <stdlib.h>
#include "main.h"


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