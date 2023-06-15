#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return (0) Success
 */
int main(void)
{
	char a;
	int b;
	long int d;
	long long int r;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(a));
        printf("size of a int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(d));
	printf("size of a long long int: %lu byte(s)\n", sizeof(r));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

