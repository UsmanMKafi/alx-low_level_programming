#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: use putchar to print lower case and then upper case
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
		while (c <= 'Z')
		{
			putchar(c);
			c++;
		}

			putchar('\n');

	return (0);
}
