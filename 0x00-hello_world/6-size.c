#include <stdio.h>
/**
*main - sizeof to declare every byte of ram
*Return: 0 (success)
*/
int main(void)
	{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %Iu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %Iu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %Iu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size Of a long long int: %Iu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %Iu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
	}