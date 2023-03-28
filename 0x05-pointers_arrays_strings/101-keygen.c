#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random passwords are easy to copy lol
 * Return: random password as i said are int for usre
*/
int main(void)
{
	int i;

	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':<>,.?/";

	srand(time(NULL));
	for (i = 0; i <= 15; i++)
	{
	printf("%c", list[rand() % (sizeof list -1)]);
	}
	return (0);
}
