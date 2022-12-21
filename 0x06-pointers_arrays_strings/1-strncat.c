#include "main.h"

/**
 * _strcat - concatenate two strings 
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting 'dest'
 */

char *_strcat(char *dest, char *src, int n);
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
