#include "main.h"
#include <stdio.h>


int num_len(int x)
{
	int i, temp;
	temp = x;
	i = 0;
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}