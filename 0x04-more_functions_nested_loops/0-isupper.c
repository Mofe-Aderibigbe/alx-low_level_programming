#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checking if a parameter represent an uppercase alphabeth.
 * c: Int stands for a character
 * Return is always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);

}
