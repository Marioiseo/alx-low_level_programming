#include <stdio.h>
/**
*main - sizeof to declare every byte of ram
*return: 0 (success)
*/
int main(void)
	{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %Iu Byte(s)\n", sizeof(a));
	printf("Size of a int: %Iu Byte(s)\n", sizeof(b));
	printf("Size of a long int: %Iu Byte(s)\n", sizeof(c));
	printf("Size Of a long long int: %Iu Byte(s)\n", sizeof(d));
	printf("Size of a float: %Iu Byte(s)\n", sizeof(e));

	return (0);
	}
