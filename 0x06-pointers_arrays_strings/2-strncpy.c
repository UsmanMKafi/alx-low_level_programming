#include "main.h"

/**
 * _strcpy - a function to copy a string
 * @dest: string
 * @src: string
 * @n: number of characters to be copied
 * Return: edited string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
