

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: use putchar to print all letters but the letter p and q .
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
