#include <stdio.h>
/**
 * main - alphabets in chars
 * Return: "0" success
*/
int main(void)
        {
        char c;

        for(c = 'a'; c <= 'z'; c++)
	{
	if(c == 'q' || c == 'e')
	{
	continue;
	}
        putchar(c);
	}
        return (0);
        }
