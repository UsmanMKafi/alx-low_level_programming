#include <stdio.h>
/**
 * main - entry point 
 * Description - prints strings 
 * Return - 0
 **/

int main (void)
{
	char char_type;
	int int_type;
	long int long_int type;
	long long int long_l_int type;
	float float_type;

	printf("size of a char: d% byte(s)\n", (int)sizeof(char_type));
	printf("size of an int: %d byte(s)\n", (int)sizeof(int_type));
	printf("size of a long int: d% byte(s)\n", (int)sizeof(long_int_type));
	printf("size of a long long int: d% byte(s)\n", (int)sizeof(long_l_int_type));
	printf("size of a float: d% byte(s)\n", (int)sizeof(float_type));
	return (0);
}
