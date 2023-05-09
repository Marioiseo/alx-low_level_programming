#include "main.h"
/**
 * read_textfile - read with file manipulataion
 * @filename: the filename ^^
 * @letters: the bla bla inside
 * Return: num of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buff[1024];
	ssize_t i = 0;

	fp = fopen(filename, "r");
	fgets(buff, letters, fp);
	i = strlen(buff);
	printf("%s", buff);
	fclose(fp);
	return (i);
}
