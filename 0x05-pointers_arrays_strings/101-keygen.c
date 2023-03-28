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

	char c[] = "a ,b ,c ,d , e, f, g, h, j, k, l, m, n ,q ,w ,z , A , S ,D ,F ,G ,H ,J";

	char nums[] = "1, 2, 3, 4, 5, 6, 7, 8, 9, 0";

	char b[] = "@, #, $, %, ^, &, *, (, ), _, !.";

	srand(time(NULL));
	for (i = 0; i <= 6; i++)
	{
	printf("%c", nums[rand()] % 10 + 1);
	printf("%c", b[rand()] % 10 + 1);
	printf("%c", c[rand()] % 10 + 1);
	}
	return (0);
}
